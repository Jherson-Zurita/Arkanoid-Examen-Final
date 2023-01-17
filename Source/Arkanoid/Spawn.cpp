// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawn.h"
#include "Brick.h"
#include "BrickRecto.h"
#include "BrickCurva.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaddlePlayerController.h"

// Sets default values
ASpawn::ASpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxDetec = CreateDefaultSubobject<UBoxComponent>(TEXT("Box collision"));

}

// Called when the game starts or when spawned
void ASpawn::BeginPlay()
{
	Super::BeginPlay();

	BoxDetec->OnComponentBeginOverlap.AddDynamic(this, &ASpawn::OnOverlapBegin);

	Bricks();
	
	
}

void ASpawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	if ((!(OtherActor->ActorHasTag("Brick")) || (OtherActor->ActorHasTag("Ball"))))
	{
		//OtherActor->ActorHasTag("Ball")
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("No hay ladrillos"));

		/*FVector Spawn1(-130.0f, 0.0f, 310.0f);
		FVector Spawn2(50.0f, 0.0f, 0.0f);

		Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);*/

		if (nla == 23) {
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("menos un ladrillo"));
		}
		
	}
}

// Called every frame
void ASpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*if (nla == 19) {
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("menos un ladrillo"));
	}*/

}

void ASpawn::Bricks()
{
	FVector Spawn0(-130.0f, 0.0f, 330.0f);
	FVector Spawn1(-130.0f, 0.0f, 350.0f);
	FVector Spawn2(50.0f, 0.0f, 0.0f);
	FVector Spawn3(0.0f, 0.0f,-20.0f);
	FVector Spawn4(0.0f, 0.0f, -20.0f);

	BrickR = GetWorld()->SpawnActor<ABrickRecto>(ABrickRecto::StaticClass(), Spawn1, FRotator::ZeroRotator);

	BrickC = GetWorld()->SpawnActor<ABrickCurva>(ABrickCurva::StaticClass(), Spawn0, FRotator::ZeroRotator);


	/*for (int a = 1; a <= 4; a++) {

		//FVector Spawn1(-130.0f, 0.0f, 350.0f);
		//FVector Spawn2(50.0f, 0.0f, 0.0f);

		for (int i = 1; i <= 6; i++) {

			Brick = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(), Spawn1, FRotator::ZeroRotator);

			Spawn1 = Spawn1 + Spawn2;

			nla++;
		}

		Spawn1 = FVector(-130.0f, 0.0f, 350.0f);
		
		Spawn1 = Spawn1 + Spawn4;
		Spawn4 = Spawn3 + Spawn4;

	}*/
}

void ASpawn::setnl(int _nla)
{
	nla = _nla;
}

int ASpawn::getnl()
{
	return nla;
}

