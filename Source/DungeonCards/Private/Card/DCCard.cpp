// Fill out your copyright notice in the Description page of Project Settings.

#include "DCCard.h"
#include "UnrealNetwork.h"

void UDCCard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDCCard, CardID);
	DOREPLIFETIME(UDCCard, CardType);
	DOREPLIFETIME(UDCCard, Attack);
	DOREPLIFETIME(UDCCard, Health);
	DOREPLIFETIME(UDCCard, ManaCost);

}

UDCCard* UDCCard::SpawnCardObject()
{
	return NewObject<UDCCard>();
}