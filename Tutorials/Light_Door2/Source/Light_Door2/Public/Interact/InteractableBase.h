
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "InteractableBase.generated.h"

UCLASS()
class LIGHT_DOOR2_API AInteractableBase : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	AInteractableBase();


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void On_Interact(AActor* Caller);
	virtual void On_Interact_Implementation(AActor* Caller);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void Start_Focus();
	virtual void Start_Focus_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void End_Focus();
	virtual void End_Focus_Implementation();
protected:


private:



};
