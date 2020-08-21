// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Swing_Door.generated.h"

UCLASS()
class LIGHT_DOOR_API ASwing_Door : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwing_Door();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//UPROPERTY(EditAnywhere, Category = "Door")
	//class UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere, Category = "Door")
	UStaticMesh* Door;

	const float Door_Angle = 90.f;
	bool Door_Condition = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void Toggle_Door();

private:
	// Opens the door
	UFUNCTION()
	void Open_Door();

	UFUNCTION()
	void Close_Door();



};
