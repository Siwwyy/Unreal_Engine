

#include "../../Public/Characters/LDCharacterBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"
#include "../../Public/Interact/InteractInterface.h"


ALDCharacterBase::ALDCharacterBase() :
	Base_Turn_Rate(45.f),
	Base_Lookup_Rate(45.f),
	Trace_Distance(1000.f)
{
	PrimaryActorTick.bCanEverTick = true;


	SpringArm_Component = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArm_Component->SetupAttachment(RootComponent);
	SpringArm_Component->TargetArmLength = 400.f;

	Camera_Component = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	Camera_Component->SetupAttachment(SpringArm_Component);

	StaticMesh_Component = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	StaticMesh_Component->SetupAttachment(RootComponent);
}

void ALDCharacterBase::On_Interact(AActor* Caller)
{

}

void ALDCharacterBase::Start_Focus()
{

}

void ALDCharacterBase::End_Focus()
{

}

void ALDCharacterBase::Tick(float DeltaTime)
{
	Trace_Forward();
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

void ALDCharacterBase::Interact_Pressed()
{
	Trace_Forward();
	if (Focused_Actor)
	{
		IInteractInterface* Interface = Cast<IInteractInterface>(Focused_Actor);

		if (Interface)
		{
			Interface->Execute_On_Interact(Focused_Actor,this);
		}
	}
}

void ALDCharacterBase::Trace_Forward_Implementation()
{
	FVector Loc{};
	FRotator Rot{};
	FHitResult Hit{};

	GetController()->GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * Trace_Distance);

	FCollisionQueryParams Trace_Params{};
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit,
		Start,
		End,
		ECC_Visibility,
		Trace_Params
	);

	//DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 2.f);


	if (bHit)
	{
		//DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(5, 5, 5), FColor::Emerald, false, 2.f);

		AActor* Interactable = Hit.GetActor();


		//if (Interactable != nullptr)
		if (Interactable)
		{
			if (Interactable != Focused_Actor)
			{
				if (Focused_Actor)
				{
					IInteractInterface* Interface = Cast<IInteractInterface>(Focused_Actor);

					if (Interface)
					{
						Interface->Execute_End_Focus(Focused_Actor);
					}
				}
				IInteractInterface* Interface = Cast<IInteractInterface>(Interactable);
				if (Interface)
				{
					Interface->Execute_Start_Focus(Interactable);
				}
				Focused_Actor = Interactable;
			}
		}
		else
		{
			if (Focused_Actor)
			{
				IInteractInterface* Interface = Cast<IInteractInterface>(Focused_Actor);

				if (Interface)
				{
					Interface->Execute_End_Focus(Focused_Actor);
				}
			}
			Focused_Actor = nullptr;
		}
	}
}

void ALDCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", EInputEvent::IE_Released, this, &ALDCharacterBase::Interact_Pressed);

	PlayerInputComponent->BindAxis("MoveForward", this, &ALDCharacterBase::Move_Forward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALDCharacterBase::Move_Right);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ALDCharacterBase::Turn_At_Rate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ALDCharacterBase::Look_Up_Rate);
}

