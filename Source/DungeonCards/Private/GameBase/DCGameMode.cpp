// Fill out your copyright notice in the Description page of Project Settings.

#include "DCGameMode.h"
#include "DCCard.h"





ADCCard* ADCGameMode::CreateCard(TSubclassOf<ADCCard> cardclass)
{
	FActorSpawnParameters params;
	ADCCard* card = this->GetWorld()->SpawnActor<ADCCard>(cardclass,params);
	return card;
}
