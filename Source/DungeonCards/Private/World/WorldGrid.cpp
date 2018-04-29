// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGrid.h"
#include "GridTile.h"


// Sets default values
AWorldGrid::AWorldGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldGrid::BeginPlay()
{
	Super::BeginPlay();
	this->Create2DGridMap();
}

// Called every frame
void AWorldGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWorldGrid::Create2DGridMap()
{
	for (int i = 0; i < WorldSize.X; i++)
	{
		
	}
}

AGridTile * AWorldGrid::GetTerrainTile(int x, int y)
{
	return nullptr;
}

