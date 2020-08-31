
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interaction_Interface.h"
#include "Interactable_Component.generated.h"

//DECLARE_DELEGATE_OneParam(FInteractableDelegate, UObject*, Context);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTERACTION_API UInteractable_Component : public UActorComponent, public IInteraction_Interface
{
	GENERATED_BODY()

public:	

	UInteractable_Component();

//#pragma region Delegates
//
//	UPROPERTY(BlueprintAssignable)
//	FInteractableDelegate OnInteract_Delegate;
//
//#pragma endregion

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void Trigger(UObject* Context);

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:

	virtual void BeginPlay() override;
	

		
};