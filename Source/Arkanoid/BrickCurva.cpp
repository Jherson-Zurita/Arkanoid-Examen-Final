// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickCurva.h"

void ABrickCurva::BeginPlay()
{
	Super::BeginPlay();
	BrickName = "BrickCurva";
}

void ABrickCurva::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	// Creo la direccion y el vector movimiento
	const FVector MoveDirection = FVector(-y, 0.0f, -x);
	const FVector Movement = MoveDirection * x * y * DeltaTime;

	if (Movement.SizeSquared() > 0.0f)
	{
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true, &Hit);

	}
}