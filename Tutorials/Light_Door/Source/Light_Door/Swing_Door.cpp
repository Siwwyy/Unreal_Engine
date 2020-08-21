// Fill out your copyright notice in the Description page of Project Settings.


#include "Swing_Door.h"
#include "UObject/ConstructorHelpers.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ASwing_Door::ASwing_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//this->Box_Component = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	//this->Box_Component->InitBoxExtent(FVector(150, 100, 100));
	//this->Box_Component->SetCollisionProfileName("Trigger");
	//RootComponent = this->Box_Component;
}

// Called when the game starts or when spawned
void ASwing_Door::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASwing_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwing_Door::Open_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw += Door_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}

void ASwing_Door::Close_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw -= Door_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}

void ASwing_Door::Toggle_Door()
{
	this->Door_Condition = !this->Door_Condition;
	if (this->Door_Condition == false)
	{
		Open_Door();
	}
	else
	{
		Close_Door();
	}
}
