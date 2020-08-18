// Fill out your copyright notice in the Description page of Project Settings.


#include "Custom_Actor.h"
//#include "Classes/Components/StaticMeshComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ACustom_Actor::ACustom_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	this->Static_Mesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void ACustom_Actor::BeginPlay()
{
	Super::BeginPlay();
	
	this->Static_Mesh->SetWorldScale3D(FMath::VRand());

}

// Called every frame
void ACustom_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(FVector(-130, -780, 350), false);
}

