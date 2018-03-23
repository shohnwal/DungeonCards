// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnumCharacterState.generated.h"

/**
*
*/
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ECardType : uint8
{
	DEFAULT				UMETA(DisplayName = "Default controls"),
	WAITINGFORSERVERRESPONSE	UMETA(DisplayName = "Waiting for server response"),
	SELECTGROUNDLOCATION UMETA(DisplayName = "Select Ground Location"),
	SELECTHERO				UMETA(DisplayName = "Select Hero"),
	SELECTMINION			UMETA(DisplayName = "Select Minion")
};