// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoidGameModeBase.h"
#include "Brick.h"
#include "FabricaMov.h"

void AArkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	/*const FVector Ubicacion(20.0f, 0.0f, 150.0f);
	const FRotator Rotador(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();*/

	//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor creado"));

		
	//MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotator, SpawnInfo);
	//Ladrillo01 = GetWorld()->SpawnActor<ABrick>(ABrick::StaticClass(),Ubicacion, Rotador);
	//Ladrillo01->SetHidden(false);
	//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor creado"));




	/*AFabrica* Fabricamov = GetWorld()->SpawnActor<AFabricaMov>(AFabricaMov::StaticClass());

	ABrick* brick = Fabricamov->OrderBrick("BrickRecto");
	//Create an Inner Health Potion and log its name
	brick = Fabricamov->OrderBrick("BrickCurva");*/
	


}
