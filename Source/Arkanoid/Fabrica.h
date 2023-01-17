// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.h"
#include "Fabrica.generated.h"

class ABrick;

UCLASS()
class ARKANOID_API AFabrica : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabrica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual APotion* ConcoctPotion(FString PotionSKU) PURE_VIRTUAL(APotionShop::ConcoctPotion, return nullptr;);

	virtual ABrick* ConcoctBrick(FString BrickSKU) PURE_VIRTUAL(AFabrica::ConcoctBrick, return nullptr;);
	//Order, concoct and returns a Potion of a specific Category
	ABrick* OrderBrick(FString Category);

};
