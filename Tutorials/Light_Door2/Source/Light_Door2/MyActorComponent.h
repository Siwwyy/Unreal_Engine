#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIGHT_DOOR2_API UMyActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UMyActorComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AActor* GetTracedActor();
protected:

	void Touch_Started(ETouchIndex::Type FingerIndex, FVector Location);
	void Touch_Ended(ETouchIndex::Type FingerIndex, FVector Location);
private:	
	
	UPROPERTY(EditAnywhere, Category = "Line Details")
	float Line_Length = 100.f;

	class ACharacter* My_Character;

	void Toggle_Light_Switch();
	void Toggle_Door();


};
