// Fill out your copyright notice in the Description page of Project Settings.

#include "DCCharacter.h"
#include "GridTile.h"


// Sets default values
ADCCharacter::ADCCharacter()
	: MaxMovePoints(0)
	, CurrentMovePoints(0)
	, Attack(0)
	, Health(0)
	, CurrentTile(nullptr)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADCCharacter::MoveAlongPath(TArray<FVector> points)
{
}

void ADCCharacter::SetCurrentWorldGridTile(AGridTile * tile)
{
}

FIntVector ADCCharacter::GetCurrentWorldTilePosition()
{
	return FIntVector();
}

AGridTile * ADCCharacter::GetCurrentWorldTile()
{
	return nullptr;
}

