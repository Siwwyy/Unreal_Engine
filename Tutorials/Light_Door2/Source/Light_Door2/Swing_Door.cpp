
#include "Swing_Door.h"

ASwing_Door::ASwing_Door():
	Door_Condition(true),
	Door_Opening_Angle(90.f)
{
	PrimaryActorTick.bCanEverTick = false;
}

void ASwing_Door::Open_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw += Door_Opening_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}

void ASwing_Door::Close_Door()
{
	FRotator New_Rotation = GetActorRotation();
	New_Rotation.Yaw -= Door_Opening_Angle;	//current rotation increased by ninety degrees
	SetActorRotation(New_Rotation);
}

void ASwing_Door::Toggle_Door()
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
