
#include "Light_Switch.h"
#include "Components/StaticMeshComponent.h"
#include "Components/LightComponent.h"
#include "Engine/PointLight.h"


ALight_Switch::ALight_Switch():
	Light_condition(false)
{
	PrimaryActorTick.bCanEverTick = false;
}

void ALight_Switch::Toggle_Light()
{
	Light_condition = !Light_condition;
	for (APointLight* Light : Light_array)
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
		Bulb->SetVisibility(Light_condition, false);
	}
}
