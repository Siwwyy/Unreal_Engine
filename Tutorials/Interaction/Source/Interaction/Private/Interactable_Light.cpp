
#include "Interactable_Light.h"
#include "Components/LightComponent.h"
#include "Engine/PointLight.h"

AInteractable_Light::AInteractable_Light():
	bLight_condition(true),
	Lights()
{
	PrimaryActorTick.bCanEverTick = false;
}

//void AInteractable_Light::StartFocus_Implementation()
//{
//	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
//}
//
//void AInteractable_Light::EndFocus_Implementation()
//{
//	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
//}

void AInteractable_Light::OnInteract_Implementation(AActor* Caller)
{
	Toggle_Light();
}

void AInteractable_Light::Focus_Implementation(bool bState)
{
	if (bState)
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
	}
}

void AInteractable_Light::Toggle_Light()
{
	bLight_condition = !bLight_condition;
	for (const auto& Light : Lights)
	{
		if (Light)
		{
			ULightComponent* Bulb = Light->FindComponentByClass<ULightComponent>();
			if (Bulb)
			{
				Bulb->SetVisibility(bLight_condition, false);
			}
		}		
	}
}
