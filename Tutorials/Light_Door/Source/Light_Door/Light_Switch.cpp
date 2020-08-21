// Fill out your copyright notice in the Description page of Project Settings.


#include "Light_Switch.h"
#include "Components/StaticMeshComponent.h"
#include "Components/LightComponent.h"
#include "Engine/PointLight.h"

// Sets default values
ALight_Switch::ALight_Switch():
	Light_condition(false)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ALight_Switch::Toggle_Light()
{
	//UE_LOG(LogTemp, Warning, TEXT("Light turned"));

	this->Light_condition = !this->Light_condition;
	for (APointLight* Light : this->Light_array)
	//for (auto Light : this->Light_array)
	{
		if (Light == nullptr)
		{
			continue;
		}
		ULightComponent* Bulb = Light->FindComponentByClass<ULightComponent>();
		if (Bulb == nullptr)
		{
			continue;
		}
		Bulb->SetVisibility(this->Light_condition, false);
		//Bulb->LightColor.R = 0;
		//Bulb->LightColor.G = 0;
		//Bulb->LightColor.B = 0;

	}

}
