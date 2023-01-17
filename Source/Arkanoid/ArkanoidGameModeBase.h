// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArkanoidGameModeBase.generated.h"


/**
 * 
 */

class ABrick;

UCLASS()
class ARKANOID_API AArkanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;



	ABrick* Ladrillo01;
	FVector Ubicacion = FVector(20.0f, 0.0f, 150.0f);
	FRotator Rotador = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* World = GetWorld();
	FActorSpawnParameters SpawnInfo;

};
