// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

class UBoxComponent;


UCLASS()
class ARKANOID_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Brick;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* BoxCollision;

	float x;
	float y;

	FString BrickName;

	/*UFUNCTION() //Entra en la caja
		virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;*/

	void DestroyBrick();

	//void CreateCapsule(FVector Location);


	float SpeedModifierOnBounce = 1.01f;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);



	

private:

	//bool HabilitadoCreacionCapsulas;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual ACapsulaBase* CreateCapsule(FString NameCapsule, FVector Location) PURE_VIRTUAL(ABrick::CreateCapsule, return nullptr;);

	//ACapsulaBase* OrdenCapsule(FString Category, FVector Spawn);
};
