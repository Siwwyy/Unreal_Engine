
#include "../Public/Interactable_Component.h"

UInteractable_Component::UInteractable_Component()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UInteractable_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}