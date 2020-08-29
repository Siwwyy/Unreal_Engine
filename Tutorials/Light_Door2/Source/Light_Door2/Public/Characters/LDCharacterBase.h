// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "../Interact/InteractInterface.h"
#include "LDCharacterBase.generated.h"



UCLASS()
class LIGHT_DOOR2_API ALDCharacterBase : public ACharacter, public IInteractInterface
{
	GENERATED_BODY()

public:
	ALDCharacterBase();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* SpringArm_Component;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* Camera_Component;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UStaticMeshComponent* StaticMesh_Component;


	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void On_Interact(AActor* Caller);
	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void Start_Focus();
	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void End_Focus();

	virtual void Tick(float DeltaTime) override;

protected:

	void Move_Forward(float Value);
	void Move_Right(float Value);
	void Turn_At_Rate(float Value);
	void Look_Up_Rate(float Value);
	void Interact_Pressed();

	UFUNCTION(BlueprintNativeEvent)
	void Trace_Forward();
	void Trace_Forward_Implementation();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float Base_Turn_Rate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float Base_Lookup_Rate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	float Trace_Distance;

private:

	AActor* Focused_Actor;

};
