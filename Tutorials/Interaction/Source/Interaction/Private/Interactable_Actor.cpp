
#include "../Public/Interactable_Actor.h"


AInteractable_Actor::AInteractable_Actor()/*:
	Meshes()*/
{
	PrimaryActorTick.bCanEverTick = false;
}

void AInteractable_Actor::Action_Implementation()
{
	Destroy();
}