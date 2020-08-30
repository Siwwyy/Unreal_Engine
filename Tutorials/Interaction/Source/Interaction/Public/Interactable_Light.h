
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interaction_Interface.h"
#include "Interactable_Light.generated.h"

class APointLight;

UCLASS()
class INTERACTION_API AInteractable_Light : public AActor, public IInteraction_Interface
{
	GENERATED_BODY()
	
public:	
	AInteractable_Light();

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

	void Toggle_Light();

protected:


private:	
	UPROPERTY(EditAnywhere, Category = "Light")
	TArray<APointLight*> Lights;

	bool bLight_condition;


};
