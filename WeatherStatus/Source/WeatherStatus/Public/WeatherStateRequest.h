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

	/* �������� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString WeatherCondition;
	/* ʵʱ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Temperature;
	/* �������� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString WindDirection;
	/* �������� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString WindPower;
	/* ����ʪ�� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Humidity;
	/* ����ͼƬ */
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
