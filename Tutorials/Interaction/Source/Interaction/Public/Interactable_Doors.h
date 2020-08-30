
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interaction_Interface.h"
#include "Interactable_Doors.generated.h"

UCLASS()
class INTERACTION_API AInteractable_Doors : public AActor, public IInteraction_Interface
{
	GENERATED_BODY()
	
public:	
	AInteractable_Doors();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void Focus(bool bState);
	virtual void Focus_Implementation(bool bState) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Door")
	UStaticMesh* Door;

	float fDoor_Opening_Angle;

	bool bDoor_Condition;

private:	

	UFUNCTION(BlueprintCallable, Category = "Door")
	void Toggle_Door();

	void Open_Door();

	void Close_Door();
};
