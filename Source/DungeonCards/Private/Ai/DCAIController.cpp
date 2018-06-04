// Fill out your copyright notice in the Description page of Project Settings.

#include "DCAIController.h"

void ADCAIController::MoveAlongPath(UPARAM(ref)TArray<FVector>& path)
{
}

bool ADCAIController::GetNextMovementNode(FVector & nextNode)
{
	if (this->CurrentPath.Num() == 0)
	{
		nextNode = FVector(0, 0, 0);
		return false;
	}
	nextNode = this->CurrentPath.Pop(0);
	return true;
}
