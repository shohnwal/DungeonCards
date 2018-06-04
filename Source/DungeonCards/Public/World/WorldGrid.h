// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "WorldGrid.generated.h"

class AGridTile;

UCLASS()
class DUNGEONCARDS_API AWorldGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Dungeon Cards")
	FIntVector WorldSize;
	
	void Create2DGridMap();

	UFUNCTION(BlueprintCallable, Category = "Dungeon Cards")
	AGridTile* GetTerrainTile(int x, int y);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Dungeon Cards")
	TArray<AGridTile*> Tiles;

	std::vector<std::vector<AGridTile*>> Grid2DMap;
	
};
