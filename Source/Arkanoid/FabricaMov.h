// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fabrica.h"
#include "FabricaMov.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AFabricaMov : public AFabrica
{
	GENERATED_BODY()

	virtual ABrick* ConcoctBrick(FString BrickSKU) override;

	
};
