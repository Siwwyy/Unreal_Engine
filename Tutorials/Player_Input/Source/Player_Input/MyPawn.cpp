// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Components/InputComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovemement");

	this->StaticMesh_ptr = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");

	this->Camera = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	this->Camera->SetRelativeLocation(FVector(-500.f,0.f,0.f));
	this->Camera->SetupAttachment(this->StaticMesh_ptr);

	SetRootComponent(this->StaticMesh_ptr);
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyPawn::Move_Forward(float amount)
{
	FloatingPawnMovement->AddInputVector(GetActorForwardVector() * amount);
}

void AMyPawn::Move_Right(float amount)
{
	FloatingPawnMovement->AddInputVector(GetActorRightVector() * amount);
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, & AMyPawn::Move_Forward);
	PlayerInputComponent->BindAxis("MoveRight", this, & AMyPawn::Move_Right);
}

