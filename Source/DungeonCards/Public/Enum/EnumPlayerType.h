// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnumPlayerType.generated.h"

/**
*
*/
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EPlayerType : uint8
{
	HERO 	UMETA(DisplayName = "Hero"),
	DUNGEONMASTER	UMETA(DisplayName = "DungeonMaster")
};
