// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawn.generated.h"


class UBoxComponent;
//class UActorComponent;
UCLASS()
class ARKANOID_API ASpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawn();

	UPROPERTY(VisibleAnywhere)
		class ABrick* Brick;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* BoxDetec;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);

	//UActorComponent* span;

	FVector X = FVector(-130.0f , 0.0f,350.0f);
	FVector Z = FVector(30.0f, 0.0f, 310.0f);
	int nla = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Bricks();

	void setnl(int);
	int getnl();

};
