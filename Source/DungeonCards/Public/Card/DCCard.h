// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnumCardType.h"
#include "WidgetCard.h"
#include "DCCard.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class DUNGEONCARDS_API ADCCard : public AActor
{
	GENERATED_BODY()
public:
	ADCCard();
	
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	void RemoveFromUMGParent();
/*
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "DungeonCards")
	void PlayCard();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "DungeonCards")
	void ActivateCardEffect();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "DungeonCards")
	void PermanentEffect();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "DungeonCards")
	void UpkeepEffect(bool upkeepAccepted);
*/
	/*
	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	static UDCCard* CreateCard(int32 cardid);
	*/
	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	UWidgetCard* CreateWidgetCard(APlayerController* owningplayer);

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32 CardID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ECardType CardType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32 Attack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32 Health;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32 ManaCost;
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasUpkeepCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32 UpkeepCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisplayCardPlayToEnemy;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UWidgetCard> WidgetCardClass;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UWidgetCard* WidgetCard;
};
