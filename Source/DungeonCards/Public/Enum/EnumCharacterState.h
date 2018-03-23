// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnumCharacterState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ECharacterState : uint8
{
	IDLE 	UMETA(DisplayName = "Idle"),
	MOVING	UMETA(DisplayName = "Moving"),
	ACTION	UMETA(DisplayName = "Action"),
	DEAD	UMETA(DisplayName = "Dead")
};
