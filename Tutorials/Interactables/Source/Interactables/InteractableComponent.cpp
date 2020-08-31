
#include "InteractableComponent.h"

void UInteractable_Scene_Component::Trigger(UObject* Context)
{
	OnInteract.Broadcast(Context);
}
