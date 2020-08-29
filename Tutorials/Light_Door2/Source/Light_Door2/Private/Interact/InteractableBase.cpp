
#include "../../Public/Interact/InteractableBase.h"

AInteractableBase::AInteractableBase()
{
	PrimaryActorTick.bCanEverTick = false;

}


void AInteractableBase::On_Interact_Implementation(AActor* Caller)
{
	Destroy();
}


void AInteractableBase::Start_Focus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("Start Focus"));
}


void AInteractableBase::End_Focus_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("Start Focus"));
}
