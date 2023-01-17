// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickRecto.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ABrickRecto : public ABrick
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
	
};
