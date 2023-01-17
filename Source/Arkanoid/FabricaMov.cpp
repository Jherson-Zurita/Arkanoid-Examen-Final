// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaMov.h"
#include "BrickRecto.h"
#include "BrickCurva.h"

ABrick* AFabricaMov::ConcoctBrick(FString BrickSKU)
{
	FVector Spawn1(-130.0f, 0.0f, 350.0f);
	FVector Spawn2(-130.0f, 0.0f, 330.0f);

	if (BrickSKU.Equals("BrickRecto")) {
		return GetWorld()->SpawnActor<ABrickRecto>(ABrickRecto::StaticClass(), Spawn1, FRotator::ZeroRotator);
	}
	else if (BrickSKU.Equals("BrickCurva")) {
		return GetWorld()->SpawnActor<ABrickCurva>(ABrickCurva::StaticClass(), Spawn2, FRotator::ZeroRotator);
	} 
	else return nullptr;
}
