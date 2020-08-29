
#include "../Public/Interactable_Doors.h"


AInteractable_Doors::AInteractable_Doors() :
	Door_Condition(false),
	Door_Opening_Angle(90.f)
{
	PrimaryActorTick.bCanEverTick = false;

}

void AInteractable_Doors::StartFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
}

void AInteractable_Doors::EndFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
}

void AInteractable_Doors::OnInteract_Implementation(AActor* Caller)
{
	Toggle_Door();
}

void AInteractable_Doors::Toggle_Door()
{
	Door_Condition = !Door_Condition;
	if (Door_Condition == false)
	{
		Open_Door();
	}
	else
	{
		Close_Door();
	}
}

void AInteractable_Doors::Open_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw += Door_Opening_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}

void AInteractable_Doors::Close_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw -= Door_Opening_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}
