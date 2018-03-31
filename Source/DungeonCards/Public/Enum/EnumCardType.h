// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnumCardType.generated.h"

/**
*
*/
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ECardType : uint8
{
	NONE			UMETA(DisplayName = "None")
/*
	SUMMONMINION 	UMETA(DisplayName = "Summon Minion at ground location"),
	TARGETMINION		UMETA(DisplayName = "Spell targeting a minion"),
	TARGETGROUND	UMETA(DisplayName = "Spell targeting a ground location"),
	IMMETIATE		UMETA(DisplayName = "Spell immediately used on use"),
	INTERRUPT	UMETA(DisplayName = "Interrupt spell to counter other spells"),
	SUMMONTRAP	UMETA(DisplayName = "Summon trap at ground location")
	*/
};
