// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Light_Switch.generated.h"

UCLASS()
class LIGHT_DOOR2_API ALight_Switch : public AActor
{
	GENERATED_BODY()

public:
	ALight_Switch();

	void Toggle_Light();
protected:

	
private:
	bool Light_condition;

	UPROPERTY(EditAnywhere, Category = "Lights")
	TArray<class APointLight*> Light_array;

	UPROPERTY(EditAnywhere, Category = "LightSwitch")
	UStaticMesh* Switch_On;

	UPROPERTY(EditAnywhere, Category = "LightSwitch")
	UStaticMesh* Switch_Off;
};
