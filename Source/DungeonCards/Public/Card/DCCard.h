// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumCardType.h"
#include "DCCard.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class DUNGEONCARDS_API UDCCard : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	static UDCCard* SpawnCardObject();

	UPROPERTY(Replicated, BlueprintReadWrite)
	int32 CardID;
	UPROPERTY(Replicated, BlueprintReadWrite)
	ECardType CardType;
	UPROPERTY(Replicated, BlueprintReadWrite)
	int32 Attack;
	UPROPERTY(Replicated, BlueprintReadWrite)
	int32 Health;
	UPROPERTY(Replicated, BlueprintReadWrite)
	int32 ManaCost;
	
};
