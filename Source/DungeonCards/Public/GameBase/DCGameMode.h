// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DCGameMode.generated.h"

class ADCCard;

/**
 * 
 */
UCLASS()
class DUNGEONCARDS_API ADCGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	ADCCard* CreateCard(TSubclassOf<ADCCard> cardclass);
	
};
