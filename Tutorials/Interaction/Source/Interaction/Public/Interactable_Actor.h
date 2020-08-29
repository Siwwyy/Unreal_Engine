
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interaction_Interface.h"
#include "Interactable_Actor.generated.h"

UCLASS()
class INTERACTION_API AInteractable_Actor : public AActor, public IInteraction_Interface
{
	GENERATED_BODY()
	
public:	
	AInteractable_Actor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller) override;
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void StartFocus();
	virtual void StartFocus_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void EndFocus();
	virtual void EndFocus_Implementation();

	virtual void BeginPlay() override;
protected:


private:	
	TArray<class UMeshComponent*> Meshes;

};
