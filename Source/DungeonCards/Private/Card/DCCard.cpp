// Fill out your copyright notice in the Description page of Project Settings.

#include "DCCard.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "WidgetCard.h"
#include "UnrealNetwork.h"

UDCCard::UDCCard()
	//: WidgetCardClass(nullptr)
{
	//this->WidgetCard = NewObject<UWidgetCard>(this, this->WidgetCardClass);
	/*
	ConstructorHelpers::FClassFinder<UUSerWidget> WidgetCardClass_Temp(TEXT("/Game/Blueprint/Ui/Game/Cards/W_NullCard"));
	if (WidgetCardClass_Temp.Class != NULL)
	{
		WidgetCardClass = WidgetCardClass_Temp.Class;
	}
	*/
}

void UDCCard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDCCard, CardID);
	DOREPLIFETIME(UDCCard, CardType);
	DOREPLIFETIME(UDCCard, Attack);
	DOREPLIFETIME(UDCCard, Health);
	DOREPLIFETIME(UDCCard, ManaCost);

}

void UDCCard::RemoveFromScreen()
{
	this->WidgetCard->RemoveFromParent();
}

UWidgetCard* UDCCard::CreateWidgetCard(APlayerController* owningplayer)
{
	
	this->WidgetCard = CreateWidget<UWidgetCard>(owningplayer->GetWorld(), this->WidgetCardClass);
	this->WidgetCard->CardData = this;
	return this->WidgetCard;
}
