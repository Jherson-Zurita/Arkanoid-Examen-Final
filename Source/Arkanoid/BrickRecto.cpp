// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickRecto.h"

void ABrickRecto::BeginPlay()
{
	Super::BeginPlay();
	BrickName = "BrickRecto";
}

void ABrickRecto::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	// Creo la direccion y el vector movimiento
	const FVector MoveDirection = FVector(0.0f, 0.0f, -x);
	const FVector Movement = MoveDirection * x * DeltaTime;

	if (Movement.SizeSquared() > 0.0f)
	{
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true, &Hit);

	}
}
