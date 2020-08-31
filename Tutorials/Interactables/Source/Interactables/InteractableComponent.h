
#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InteractableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableDelegate, UObject*, Context);


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INTERACTABLES_API UInteractable_Scene_Component : public USceneComponent
{
	GENERATED_BODY()

public:

#pragma region Delegates

	UPROPERTY(BlueprintAssignable)
	FInteractableDelegate OnInteract;

#pragma endregion

	UFUNCTION(BlueprintCallable, Category = "Interaction")
		void Trigger(UObject* Context);



};
