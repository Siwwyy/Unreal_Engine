
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interaction_Interface.h"
#include "Interactable_Actor.generated.h"

class UMeshComponent;

UCLASS()
class INTERACTION_API AInteractable_Actor : public AActor, public IInteraction_Interface
{
	GENERATED_BODY()
	
public:	
	AInteractable_Actor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller) override;

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	//void StartFocus();
	//virtual void StartFocus_Implementation() override;

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	//void EndFocus();
	//virtual void EndFocus_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void Focus(bool bState);
	virtual void Focus_Implementation(bool bState) override;

	virtual void BeginPlay() override;
protected:


private:	
	TArray<UMeshComponent*> Meshes;

};