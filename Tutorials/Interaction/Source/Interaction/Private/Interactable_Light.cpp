
#include "Interactable_Light.h"
#include "Components/LightComponent.h"
#include "Engine/PointLight.h"

AInteractable_Light::AInteractable_Light():
	Lights(),
	bLight_condition(true)
{
	PrimaryActorTick.bCanEverTick = false;
}

void AInteractable_Light::OnInteract_Implementation(AActor* Caller)
{
	Action();
}

void AInteractable_Light::Action()
{
	bLight_condition = !bLight_condition;
	for (const auto& Light : Lights)
	{
		if (!Light)
		{
			continue;
		}	

		if (ULightComponent* Bulb = Light->FindComponentByClass<ULightComponent>())
		{
			Bulb->SetVisibility(bLight_condition, false);
		}
	}
}