// Fill out your copyright notice in the Description page of Project Settings.

#include "DCCard.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "WidgetCard.h"
#include "UnrealNetwork.h"

ADCCard::ADCCard()
	//: WidgetCardClass(nullptr)
{
	this->bReplicates = true;
	this->SetActorTickEnabled(false);

	//this->WidgetCard = NewObject<UWidgetCard>(this, this->WidgetCardClass);
	/*
	ConstructorHelpers::FClassFinder<UUSerWidget> WidgetCardClass_Temp(TEXT("/Game/Blueprint/Ui/Game/Cards/W_NullCard"));
	if (WidgetCardClass_Temp.Class != NULL)
	{
		WidgetCardClass = WidgetCardClass_Temp.Class;
	}
	*/
}

void ADCCard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADCCard, CardID);
	DOREPLIFETIME(ADCCard, CardType);
	DOREPLIFETIME(ADCCard, Attack);
	DOREPLIFETIME(ADCCard, Health);
	DOREPLIFETIME(ADCCard, ManaCost);
	DOREPLIFETIME(ADCCard, bHasUpkeepCost);
	DOREPLIFETIME(ADCCard, UpkeepCost);
	DOREPLIFETIME(ADCCard, bDisplayCardPlayToEnemy);
}

void ADCCard::RemoveFromUMGParent()
{
	this->WidgetCard->RemoveFromParent();
}

/*
void ADCCard::PlayCard_Implementation()
{
}

void ADCCard::ActivateCardEffect_Implementation()
{
}

void ADCCard::PermanentEffect_Implementation()
{
}

void ADCCard::UpkeepEffect_Implementation(bool upkeepAccepted)
{
}
*/

UWidgetCard* ADCCard::CreateWidgetCard(APlayerController* owningplayer)
{
	this->WidgetCard = CreateWidget<UWidgetCard>(owningplayer->GetWorld(), this->WidgetCardClass);
	this->WidgetCard->CardData = this;
	return this->WidgetCard;
}