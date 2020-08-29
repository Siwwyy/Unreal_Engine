
#include "Interactable_Light.h"
#include "Components/LightComponent.h"
#include "Engine/PointLight.h"

AInteractable_Light::AInteractable_Light():
	Light_condition(true)
{
	PrimaryActorTick.bCanEverTick = false;

}

void AInteractable_Light::StartFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
}

void AInteractable_Light::EndFocus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
}

void AInteractable_Light::OnInteract_Implementation(AActor* Caller)
{
	Toggle_Light();
}

void AInteractable_Light::Toggle_Light()
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
