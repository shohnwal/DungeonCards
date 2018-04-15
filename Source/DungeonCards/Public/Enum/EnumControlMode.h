// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnumControlMode.generated.h"

/**
*
*/
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EControlMode : uint8
{
	DEFAULTCONTROLS		UMETA(DisplayName = "Default controls"),
	NOGAMEPLAY			UMETA(DisplayName = "No gameplay controls"),
	//WAITINGFORRESPONSE	UMETA(DisplayName = "Waiting for server response"),
	PLAYCOUNTERSPELLSONLY	UMETA(DisplayName = "Play counterspells"),
	SELECTGROUNDLOCATION UMETA(DisplayName = "Select Ground Location"),
	SELECTHERO				UMETA(DisplayName = "Select Hero"),
	SELECTMINION			UMETA(DisplayName = "Select Minion"),
	SELECTCHARACTER			UMETA(DisplayName = "Select any character")
};