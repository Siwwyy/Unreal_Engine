#include "MyActorComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Light_Switch.h"
#include "Swing_Door.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

UMyActorComponent::UMyActorComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	My_Character = Cast<ACharacter>(GetOwner());
	UInputComponent* PlayerInputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (PlayerInputComponent != nullptr)
	{
		PlayerInputComponent->BindAction("ObjectInteraction", IE_Pressed, this, &UMyActorComponent::Toggle_Light_Switch);
		PlayerInputComponent->BindAction("DoorAction", IE_Pressed, this, &UMyActorComponent::Toggle_Door);
	}
}

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

void UMyActorComponent::Touch_Started(ETouchIndex::Type FingerIndex, FVector Location)
{

}

void UMyActorComponent::Touch_Ended(ETouchIndex::Type FingerIndex, FVector Location)
{

}

void UMyActorComponent::Toggle_Light_Switch()
{
	AActor* Actor = GetTracedActor();
	if (Actor != nullptr)
	{
		ALight_Switch* Light_ptr = Cast<ALight_Switch>(Actor);
		if (Light_ptr != nullptr)
		{
			Light_ptr->Toggle_Light();
		}
	}
}

void UMyActorComponent::Toggle_Door()
{
	//static bool door_closed = true;
	//AActor* Actor = GetTracedActor();
	//if (Actor != nullptr)
	//{
	//	FRotator New_Rotation = Actor->GetActorRotation();
	//	if (door_closed == true)
	//	{
	//		New_Rotation.Yaw += 90.f;	//current rotation increased by ninety degrees
	//	}
	//	else
	//	{
	//		New_Rotation.Yaw -= 90.f;	//current rotation decreased by ninety degrees
	//	}
	//	Actor->SetActorRotation(New_Rotation);
	//	door_closed = !door_closed;
	//}

	AActor* Actor = GetTracedActor();
	if (Actor != nullptr)
	{
		ASwing_Door* Door_ptr = Cast<ASwing_Door>(Actor);
		if (Door_ptr != nullptr)
		{
			Door_ptr->Toggle_Door();
		}
	}
}
