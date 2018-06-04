// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DCAIController.generated.h"

/**
 * 
 */
UCLASS()
class DUNGEONCARDS_API ADCAIController : public AAIController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Dungeon Cards")
	void MoveAlongPath(UPARAM(ref) TArray<FVector>& path);
	
	UFUNCTION(BlueprintCallable, Category = "Dungeon Cards")
	bool GetNextMovementNode(FVector& nextNode);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	TArray<FVector> CurrentPath;
	
};
