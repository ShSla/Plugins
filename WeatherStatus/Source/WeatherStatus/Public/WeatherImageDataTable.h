// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeatherImageDataTable.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FImageDataTable : public FTableRowBase
{
	GENERATED_BODY()
public:
	FImageDataTable()
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable Test")
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTable Test")
		class UTexture2D* WeatherImage;
};


UCLASS()
class WEATHERSTATUS_API UWeatherImageDataTable : public UDataTable
{
	GENERATED_BODY()
	
};
