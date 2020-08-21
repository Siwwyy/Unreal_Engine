// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIGHT_DOOR_API UMyActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyActorComponent();

protected:

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AActor* GetTracedActor();
	AActor* GetTracedActor(FVector location, float Length);

private:
	UPROPERTY(EditAnywhere, Category = "Line Details")
	float Line_Length = 100.f;

	class ACharacter* My_Character;

	void Toggle_Light_Switch();
	void Toggle_Door();

};
