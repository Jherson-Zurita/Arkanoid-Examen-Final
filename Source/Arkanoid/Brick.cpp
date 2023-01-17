// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Ball.h"
#include "Spawn.h"




// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> BrickMessAsset(TEXT("/Game/Meshes/SM_Brick.SM_Brick"));

	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	SM_Brick->SetStaticMesh(BrickMessAsset.Object);
	/*SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));*/
	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SetRootComponent(SM_Brick);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetBoxExtent(FVector(25.5f, 10.5f, 10.5f));
	BoxCollision->SetupAttachment(GetRootComponent());

	//RootComponent = BoxCollision;

	



}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
}

void ABrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	
		if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
		{

			ABall* MyBall = Cast<ABall>(OtherActor);

			FVector BallVelocity = MyBall->GetVelocity();
			BallVelocity *= (SpeedModifierOnBounce - 1.0f);

			MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);

			FTimerHandle UnusedHandle;  //<--
			GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABrick::DestroyBrick, 0.1f, false); //<--

			FVector GetLocation = this->GetActorLocation();

			

			
		}
	
}



void ABrick::DestroyBrick()
{
	this->Destroy();  //<---
}

/*void ABrick::NotifyActorBeginOverlap(AActor* OtherActor)
{

}*/

/*void ABrick::CreateCapsule(FVector Location)
{

	ABrick* CapsuleCreator = GetWorld()->SpawnActor<AHelpCapsules>(AHelpCapsules::StaticClass(), FVector(0.0f, 0.0f, -100.0f), FRotator::ZeroRotator);
	ACapsulaBase* Capsule = CapsuleCreator->OrdenCapsule("Bomb", Location);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Capsula de %s"), *Capsule->GetCapsuleName()));

}*/

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

/*ACapsulaBase* ABrick::OrdenCapsule(FString Category, FVector Spawn)
{
	ACapsulaBase* Capsules = CreateCapsule(Category, Spawn);
	return Capsules;
}*/

