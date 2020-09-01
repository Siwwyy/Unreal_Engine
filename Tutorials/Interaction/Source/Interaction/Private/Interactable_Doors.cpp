
#include "../Public/Interactable_Doors.h"


AInteractable_Doors::AInteractable_Doors() :
	fDoor_Opening_Angle(90.f),
	bDoor_Condition(false)
{
	PrimaryActorTick.bCanEverTick = false;
}

void AInteractable_Doors::Action_Implementation()
{
	bDoor_Condition = !bDoor_Condition;
	bDoor_Condition ? Open_Door() : Close_Door();
}

void AInteractable_Doors::Open_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw += fDoor_Opening_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}

void AInteractable_Doors::Close_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw -= fDoor_Opening_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}