// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class PLAYER_INPUT_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move_Forward(float amount);
	void Move_Right(float amount);

	class UFloatingPawnMovement* FloatingPawnMovement;	//forward declaration

	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* StaticMesh_ptr;

	UPROPERTY(EditAnywhere, Category = "Components")
	class UCameraComponent* Camera;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
