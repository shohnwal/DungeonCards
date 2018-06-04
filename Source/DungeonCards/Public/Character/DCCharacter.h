// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DCCharacter.generated.h"

class AGridTile;

UCLASS()
class DUNGEONCARDS_API ADCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADCCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	void MoveAlongPath(TArray<FVector> points);

	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	void SetCurrentWorldGridTile(AGridTile* tile);

	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	FIntVector GetCurrentWorldTilePosition();

	UFUNCTION(BlueprintCallable, Category = "DungeonCards")
	AGridTile* GetCurrentWorldTile();


	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	int MaxMovePoints;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	int CurrentMovePoints;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	int Attack;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	int Health;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	AGridTile* CurrentTile;
};
