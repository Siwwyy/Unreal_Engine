// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Light_Switch.generated.h"

UCLASS()
class LIGHT_DOOR_API ALight_Switch : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALight_Switch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Toggle_Light();
private:

	bool Light_condition;

	UPROPERTY(EditAnywhere, Category = "Lights")
	TArray<class APointLight*> Light_array;

	UPROPERTY(EditAnywhere, Category = "LightSwitch")
	UStaticMesh* Switch_On;

	UPROPERTY(EditAnywhere, Category = "LightSwitch")
	UStaticMesh* Switch_Off;
};
