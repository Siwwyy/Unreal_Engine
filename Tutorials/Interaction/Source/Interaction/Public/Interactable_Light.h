
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

private:	
	UPROPERTY(EditAnywhere, Category = "Light")
	TArray<APointLight*> Lights;

	bool bLight_condition;

	UFUNCTION(BlueprintCallable, Category = "Door")
	void Action();
};
