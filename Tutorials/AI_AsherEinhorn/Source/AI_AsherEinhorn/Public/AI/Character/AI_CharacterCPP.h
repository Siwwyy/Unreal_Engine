
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AI_CharacterCPP.generated.h"

UCLASS()
class AI_ASHEREINHORN_API AAI_CharacterCPP : public ACharacter
{
	GENERATED_BODY()

public:
	AAI_CharacterCPP();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		float fBaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		float fBaseLookUpRate;

protected:
	virtual void BeginPlay() override;

};