// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->StaticMesh_ptr = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	

	this->StaticMesh_ptr->SetWorldScale3D(FMath::VRand());
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(FVector(0.f, 0.f, 0.f));
	/*this->StaticMesh_ptr->SetWorldLocation(FVector(0.f, 0.f, FMath::VRand()));*/
	//this->StaticMesh_ptr->SetWorldScale3D(FMath::VRand());
	//this->vec.Add((new CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent")));
	//this->vec.emplace_back(new CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent"));

	//this->vec[std::distance(this->vec.begin(), this->vec.end() - 1)]->SetWorldScale3D(FMath::VRand());


	//FVector New_Loc = GetActorLocation();
	////float DeltaHeight = (FMath::Sin(Running_Time + DeltaTime) - FMath::Sin(Running_Time));
	//float DeltaHeight = (FMath::Sin(Running_Time));

	//New_Loc.Z += DeltaHeight * 15.f;
	//Running_Time += DeltaTime;
	//SetActorLocation(New_Loc);

}

