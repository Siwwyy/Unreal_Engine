
#include "../Public/Interactable_Actor.h"
#include "Components/MeshComponent.h"


AInteractable_Actor::AInteractable_Actor()
{

	PrimaryActorTick.bCanEverTick = false;


}

void AInteractable_Actor::OnInteract_Implementation(AActor* Caller)
{
	Destroy();
}

void AInteractable_Actor::StartFocus_Implementation()
{
	for (UMeshComponent* Mesh : Meshes)
	{
		Mesh->SetRenderCustomDepth(true);
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
	}
}

void AInteractable_Actor::EndFocus_Implementation()
{
	for (UMeshComponent* Mesh : Meshes)
	{
		Mesh->SetRenderCustomDepth(false);
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
	}
}

void AInteractable_Actor::BeginPlay()
{
	Super::BeginPlay();
	for (UActorComponent* Comp : GetComponentsByClass(UMeshComponent::StaticClass()))
	{
		UMeshComponent* Mesh = Cast<UMeshComponent>(Comp);
		Meshes.Push(Mesh);
	}
}
