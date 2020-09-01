
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_Interface.h"
#include "Interactable_Actor.generated.h"

class UMeshComponent;

UCLASS()
class INTERACTION_API AInteractable_Actor : public AActor, public IActor_Interface
{
	GENERATED_BODY()
	
public:	
	AInteractable_Actor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void Action();
	virtual void Action_Implementation() override;

	virtual void BeginPlay() override;

private:	
	TArray<UMeshComponent*> Meshes;

};