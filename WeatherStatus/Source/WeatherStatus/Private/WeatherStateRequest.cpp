// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherStateRequest.h"
#include "HTTP.h"
#include "Json.h"
#include "TimerManager.h"
#include "HttpModule.h"
#include "Engine/DataTable.h"
#include <WeatherImageDataTable.h>
UWeatherStateRequest* Node;

UWeatherStateRequest* UWeatherStateRequest::WeatherInformation(FString CityAdcode, FString UserKey)
{
	//UWeatherStateRequest* Node = NewObject<UWeatherStateRequest>();
	Node = NewObject<UWeatherStateRequest>();
	//构建定时器
	//高德天气参数
	FString URL = "https://restapi.amap.com/v3/weather/weatherInfo?city=" + CityAdcode + "&key=" + UserKey + "&extensions=base";

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindStatic(&UWeatherStateRequest::OnResponseReceived);
	//This is the url on which to process the request
	Request->SetURL(URL);
	Request->SetVerb("GET");
	Request->SetHeader("Content-Type", TEXT("application/json;charset=UTF-8"));
	Request->ProcessRequest();
	return Node;
}

void UWeatherStateRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	TSharedPtr<FJsonObject> JsonObject;
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	FWeatherInfo WeatherData;
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		const TArray<TSharedPtr<FJsonValue>> *temp;
		if (JsonObject->TryGetArrayField("lives", temp))
		{
			TArray<TSharedPtr<FJsonValue>> data = JsonObject->GetArrayField("lives");
			TSharedPtr<FJsonObject> Now = data[0]->AsObject();
			if (Now)
			{
				WeatherData.Temperature = Now->GetIntegerField("temperature");
				WeatherData.WindDirection = Now->GetStringField("winddirection");
				WeatherData.WindPower = Now->GetStringField("windpower");
				WeatherData.WeatherCondition = Now->GetStringField("weather");
				WeatherData.Humidity = Now->GetIntegerField("humidity");
				Node->RequsetWeather(true, WeatherData);
				return;
			}
		}
		Node->RequsetWeather(false, WeatherData);
	}
	else
	{
		Node->RequsetWeather(false,WeatherData);
	}
}

void UWeatherStateRequest::RequsetWeather(bool IsOk, FWeatherInfo WeatherData)
{	
	if (IsOk)
	{
		SwitchWeatherImage(WeatherData);
	}
	else {
		if (Node->OnError.IsBound())
		{
			Node->OnError.Broadcast(WeatherData);
		}
	}
}

void UWeatherStateRequest::SwitchWeatherImage(FWeatherInfo WeatherData)
{
	//加载蓝图DataTable表
	WeatherTable = LoadObject<UDataTable>(NULL, UTF8_TO_TCHAR("DataTable'/WeatherStatus/WeatherDataTable.WeatherDataTable'"));
	FWeatherInfo NewWeatherData = WeatherData;

	if (WeatherTable)
	{
		TArray<FName> RowNames;
		RowNames = WeatherTable->GetRowNames();
		FString tmep;
		for (auto& name : RowNames)
		{
			////FEunDatas 为自定义格式的数据表
			FImageDataTable* pRow = WeatherTable->FindRow<FImageDataTable>(name, tmep);
			if (pRow)
			{
				//找对应的图片
				if (NewWeatherData.WeatherCondition == pRow->Name)
				{
					NewWeatherData.WeatherImage = pRow->WeatherImage;
				}
			}
		}
	}

	if (Node->OnSuccess.IsBound())
	{
		Node->OnSuccess.Broadcast(NewWeatherData);
	}
}

