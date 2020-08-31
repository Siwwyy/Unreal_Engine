
#include "../Public/Interactable_Component.h"


UInteractable_Component::UInteractable_Component()
{
	PrimaryComponentTick.bCanEverTick = false;
	Owner = Cast<AActor>(GetOwner());
}

void UInteractable_Component::Focus_Implementation(bool bState)
{
	GEngine->AddOnScreenDebugMessage(0, 3, FColor::Red, bState ? FString::Printf(TEXT("Focused on")) : FString::Printf(TEXT("Focused off")));
}