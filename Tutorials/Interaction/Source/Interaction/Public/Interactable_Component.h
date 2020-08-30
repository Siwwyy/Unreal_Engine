
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interactable_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTERACTION_API UInteractable_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	UInteractable_Component();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:	

};
