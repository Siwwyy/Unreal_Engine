
#include "../Public/Interactable_Actor.h"
#include "Components/MeshComponent.h"


AInteractable_Actor::AInteractable_Actor():
	Meshes()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AInteractable_Actor::OnInteract_Implementation(AActor* Caller)
{
	Destroy();
}

void AInteractable_Actor::BeginPlay()
{
	Super::BeginPlay();

	TArray<UActorComponent*> Comp = GetComponentsByClass(UMeshComponent::StaticClass());

	if (!Comp.Num())
	{
		return;
	}

	for (const auto& Actor_Comp : Comp)
	{
		if (UMeshComponent* Mesh = Cast<UMeshComponent>(Actor_Comp))
		{
			Meshes.Push(Mesh);
		}
	}
}