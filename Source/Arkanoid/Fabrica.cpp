// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica.h"

// Sets default values
AFabrica::AFabrica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabrica::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabrica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABrick* OrderBrick(FString Category)
{
	ABrick* Bricks = ConcoctBrick(Category);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Concocting %s"),*Bricks->GetPotionName()));

	//Bricks->Tick(DeltaTime);

	return Bricks;
}
