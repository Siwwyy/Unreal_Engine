

#include "../../Public/Characters/LDCharacterBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"


ALDCharacterBase::ALDCharacterBase():
	Base_Turn_Rate(45.f),
	Base_Lookup_Rate(45.f)
{
	PrimaryActorTick.bCanEverTick = false;


	SpringArm_Component = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArm_Component->SetupAttachment(RootComponent);
	SpringArm_Component->TargetArmLength = 400.f;

	Camera_Component = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	Camera_Component->SetupAttachment(SpringArm_Component);

	StaticMesh_Component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	StaticMesh_Component->SetupAttachment(RootComponent);
}

void ALDCharacterBase::Move_Forward(float Value)
{
	if ((Controller) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ALDCharacterBase::Move_Right(float Value)
{
	if ((Controller) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ALDCharacterBase::Turn_At_Rate(float Value)
{
	AddControllerYawInput(Value * Base_Turn_Rate * GetWorld()->GetDeltaSeconds());
}

void ALDCharacterBase::Look_Up_Rate(float Value)
{
	AddControllerPitchInput(Value * Base_Lookup_Rate * GetWorld()->GetDeltaSeconds());
}

void ALDCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ALDCharacterBase::Move_Forward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALDCharacterBase::Move_Right);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ALDCharacterBase::Turn_At_Rate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ALDCharacterBase::Look_Up_Rate);
}

