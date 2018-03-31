// Fill out your copyright notice in the Description page of Project Settings.

#include "DCGameMode.h"
#include "DCCard.h"





UDCCard* ADCGameMode::CreateCard(TSubclassOf<UDCCard> cardclass)
{
	UDCCard* card = NewObject<UDCCard>(this, cardclass);
	return card;
}
