
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
	Toggle_Light();
}

void AInteractable_Light::Focus_Implementation(bool bState)
{
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, bState ? FString::Printf(TEXT("Focused on")) : FString::Printf(TEXT("Focused off")));
}

void AInteractable_Light::Toggle_Light()
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
