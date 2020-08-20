// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Light_Switch.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("HELLO WORLD"));
	// ...

}


// Called every frame
void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	this->My_Character = Cast<ACharacter>(GetOwner());
	UInputComponent* PlayerInputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (PlayerInputComponent != nullptr)
	{
		PlayerInputComponent->BindAction("ObjectInteraction", IE_Pressed, this, &UMyActorComponent::Toggle_Light_Switch);
		//PlayerInputComponent->BindAction("ObjectInteraction", IE_Pressed, this, &UMyActorComponent::TestFun);
	}
}

//void UMyActorComponent::TestFun()
//{
//	//AActor* test = GetTracedActor();
//	FVector Player_Hand_Location = My_Character->GetMesh()->GetBoneLocation("hand_r", EBoneSpaces::WorldSpace);
//	AActor* test = GetTracedActor(Player_Hand_Location,50);
//	if (test != nullptr)
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Actor hit: %s"), *test->GetName());
//	}
//}

AActor* UMyActorComponent::GetTracedActor()
{
	FVector Player_Head_Location = My_Character->GetMesh()->GetBoneLocation("head", EBoneSpaces::WorldSpace);
	FVector Player_Location{};
	FRotator Player_Rotation{};

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPlayerViewPoint
	(
		OUT Player_Location,
		OUT Player_Rotation
	);

	FVector Line_Start = Player_Head_Location + Player_Rotation.Vector();
	Player_Head_Location.Z += 20;
	FVector Line_End = Player_Head_Location + Player_Rotation.Vector() * Line_Length;

	DrawDebugLine(
		GetWorld(),
		Line_Start,
		Line_End,
		FColor::Red,
		false,
		2.0f,
		0,
		5.0f
	);

	FHitResult Hit_result{};
	FCollisionQueryParams LineParams(FName(""), false, GetOwner());

	if (GetWorld()->LineTraceSingleByChannel(
		OUT Hit_result,
		Line_Start,
		Line_End,
		ECollisionChannel::ECC_WorldDynamic,
		LineParams
	))
	{
		AActor* Hit_Actor = Hit_result.GetActor();
		if (Hit_Actor != nullptr)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Actor hit: %s"), *Hit_Actor->GetName());

			return Hit_Actor;
		}
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}
}

AActor* UMyActorComponent::GetTracedActor(FVector location, float Length)
{

	FVector Player_Location{};
	FRotator Player_Rotation{};

	UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetPlayerViewPoint
	(
		OUT Player_Location,
		OUT Player_Rotation
	);

	FVector Line_Start = location + Player_Rotation.Vector();
	FVector Line_End = location + Player_Rotation.Vector() * Length;

	DrawDebugLine(
		GetWorld(),
		Line_Start,
		Line_End,
		FColor::Red,
		false,
		2.0f,
		0,
		5.0f
	);

	FHitResult Hit_result{};
	FCollisionQueryParams LineParams(FName(""), false, GetOwner());

	if (GetWorld()->LineTraceSingleByChannel(
		OUT Hit_result,
		Line_Start,
		Line_End,
		ECollisionChannel::ECC_WorldDynamic,
		LineParams
	))
	{
		AActor* Hit_Actor = Hit_result.GetActor();
		if (Hit_Actor != nullptr)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Actor hit: %s"), *Hit_Actor->GetName());

			return Hit_Actor;
		}
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}
}

void UMyActorComponent::Toggle_Light_Switch()
{
	//UE_LOG(LogTemp, Warning, TEXT("IN TOGGLE SWITCH"));
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *FPaths::GetPath("../"));
	//AActor* Actor = GetTracedActor();

	AActor* Actor = GetTracedActor();
	if (Actor != nullptr)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Actor hit: %s"), *Actor->GetName());
		ALight_Switch* Light_ptr = Cast<ALight_Switch>(Actor);
		if (Light_ptr != nullptr)
		{
			Light_ptr->Toggle_Light();
		}
	}
}

