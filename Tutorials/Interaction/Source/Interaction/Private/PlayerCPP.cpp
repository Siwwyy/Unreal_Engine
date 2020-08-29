
#include "../Public/PlayerCPP.h"
#include "Engine/Public/CollisionQueryParams.h"
#include "../Public/Interaction_Interface.h"


APlayerCPP::APlayerCPP():
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f)
{

	PrimaryActorTick.bCanEverTick = true;

	TraceParams = FCollisionQueryParams(FName(TEXT("Trace")), true, this);
}


void APlayerCPP::SrvInteract_Implementation()
{
	if (FocusedActor)
	{
		IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor);

		if (Interface)
		{
			Interface->Execute_OnInteract(FocusedActor, this);
		}
	}
}

bool APlayerCPP::SrvInteract_Validate()
{
	return true;
}

void APlayerCPP::HandleHighlight()
{
	////GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, FString::Printf(TEXT("Focused off222")));
	//UE_LOG(LogTemp, Warning, TEXT("DDDD"));

	AActor* interactable = FindActorInLineOfSide();
	if (interactable)
	{
		if (interactable != FocusedActor)
		{
			if (FocusedActor)
			{
				IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor);
				if (Interface)
				{
					Interface->Execute_EndFocus(FocusedActor);
				}
			}
			IInteraction_Interface* Interface = Cast<IInteraction_Interface>(interactable);
			if (Interface)
			{
				Interface->Execute_StartFocus(interactable);
			}
			FocusedActor = interactable;
		}
	}
	else
	{
		if (FocusedActor)
		{
			IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor);

			if (Interface)
			{
				Interface->Execute_EndFocus(FocusedActor);
			}
		}
		FocusedActor = nullptr;
	}
}

AActor* APlayerCPP::FindActorInLineOfSide()
{
	FVector Location{};
	FRotator Rotator{};
	FHitResult Hit(ForceInit);
	GetController()->GetPlayerViewPoint(Location, Rotator);

	FVector start = Location;
	FVector end = start + (Rotator.Vector() * InteractionDistance);

	GetWorld()->LineTraceSingleByChannel(Hit,
		start,
		end,
		ECC_Visibility,
		TraceParams
	);

	return Hit.GetActor();
}

void APlayerCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerCPP::SrvInteract);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCPP::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCPP::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerCPP::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerCPP::LookUpAtRate);
}

void APlayerCPP::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCPP::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCPP::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APlayerCPP::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void APlayerCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HandleHighlight();
}
