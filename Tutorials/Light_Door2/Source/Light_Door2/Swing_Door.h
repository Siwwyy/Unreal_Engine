// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Swing_Door.generated.h"

UCLASS(Blueprintable)
class LIGHT_DOOR2_API ASwing_Door : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwing_Door();

	void Open_Door();
	void Close_Door();
	UFUNCTION(BlueprintCallable, Category = "Door")
	void Toggle_Door();

protected:
	UPROPERTY(EditAnywhere, Category = "Door")
	UStaticMesh* Door;

	bool Door_Condition;
	float Door_Opening_Angle;
private:


};
