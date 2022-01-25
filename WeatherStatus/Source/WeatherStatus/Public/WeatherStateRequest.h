// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HTTP.h"
#include "WeatherStateRequest.generated.h"
/**
 * 
 */


USTRUCT(BlueprintType)
struct FWeatherInfo
{
	GENERATED_USTRUCT_BODY()

	/* 天气现象 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString WeatherCondition;
	/* 实时气温 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Temperature;
	/* 风向描述 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString WindDirection;
	/* 风力级别 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString WindPower;
	/* 空气湿度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Humidity;
	/* 天气图片 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* WeatherImage;

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintAsyncWeatherResult, FWeatherInfo,Result);


UCLASS()
class WEATHERSTATUS_API UWeatherStateRequest : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintAssignable)
		FBlueprintAsyncWeatherResult OnSuccess;
	UPROPERTY(BlueprintAssignable)
		FBlueprintAsyncWeatherResult  OnError;

	//UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Delay = "0.5"))
	//	static UWeatherStateRequest* AsyncDelay(UObject* WorldContextObject, float Delay);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
		static UWeatherStateRequest* WeatherInformation(FString CityAdcode,FString UserKey);

	static void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

protected:

	class UDataTable* WeatherTable;  

	void RequsetWeather(bool IsOk, FWeatherInfo WeatherData);

	void SwitchWeatherImage(FWeatherInfo WeatherData);
};
