
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

//void AInteractable_Actor::StartFocus_Implementation()
//{
//	for (const auto& Mesh : Meshes)
//	{
//		Mesh->SetRenderCustomDepth(true);
//		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
//	}
//}
//
//void AInteractable_Actor::EndFocus_Implementation()
//{
//	for (const auto& Mesh : Meshes)
//	{
//		Mesh->SetRenderCustomDepth(false);
//		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
//	}
//}

void AInteractable_Actor::Focus_Implementation(bool bState)
{
	if (bState)
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused on")));
		for (const auto& Mesh : Meshes)
		{
			Mesh->SetRenderCustomDepth(bState);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off")));
		for (const auto& Mesh : Meshes)
		{
			Mesh->SetRenderCustomDepth(bState);
		}
	}
}

void AInteractable_Actor::BeginPlay()
{
	Super::BeginPlay();
	TArray<UActorComponent*> Comp = GetComponentsByClass(UMeshComponent::StaticClass());
	if (Comp.Num())
	{
		for (const auto& Actor_Comp : Comp)
		{
			UMeshComponent* Mesh = Cast<UMeshComponent>(Actor_Comp);
			if (Mesh)
			{
				Meshes.Push(Mesh);
			}
		}
	}
}