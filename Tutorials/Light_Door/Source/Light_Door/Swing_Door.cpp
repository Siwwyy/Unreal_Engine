// Fill out your copyright notice in the Description page of Project Settings.


#include "Swing_Door.h"

// Sets default values
ASwing_Door::ASwing_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
