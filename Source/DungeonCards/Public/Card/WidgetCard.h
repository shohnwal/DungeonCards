// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WIdgetCard.generated.h"

class ADCCard;
/**
 * 
 */
UCLASS(Abstract)
class DUNGEONCARDS_API UWidgetCard : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "DCCard")
	ADCCard* CardData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "DCCard")
	UTexture2D* wCardImageTexture;
	
};
