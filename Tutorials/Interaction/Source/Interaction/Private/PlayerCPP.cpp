
#include "../Public/PlayerCPP.h"
#include "Engine/Public/CollisionQueryParams.h"
#include "../Public/Interaction_Interface.h"


APlayerCPP::APlayerCPP():
	fBaseTurnRate(45.f),
	fBaseLookUpRate(45.f),
	FocusedActor(nullptr),
	fInteractionDistance(200.f)
{
	PrimaryActorTick.bCanEverTick = true;

	TraceParams = FCollisionQueryParams(FName(TEXT("Trace")), true, this);
}


void APlayerCPP::SrvInteract_Implementation()
{
	if (FocusedActor)
	{
		if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor))
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
	AActor* interactable = FindActorInLineOfSide();
	if (interactable)
	{
		if (interactable == FocusedActor)
		{
			return;
		}
		if (FocusedActor)
		{
			if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor))
			{
				Interface->Execute_Focus(FocusedActor, false);
			}
		}
		if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(interactable))
		{
			Interface->Execute_Focus(interactable, true);
		}
		FocusedActor = interactable;
	}
	else
	{
		if (FocusedActor)
		{
			if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor))
			{
				Interface->Execute_Focus(FocusedActor, false);
			}
		}
		FocusedActor = nullptr;
	}
}

AActor* APlayerCPP::FindActorInLineOfSide()
{
	FVector Location;
	FRotator Rotator{};
	FHitResult Hit(ForceInit);
	Location.Normalize();	//to unit vector as a vector initialization
	Rotator.Normalize();	//to unit vector as a vector initialization
	GetController()->GetPlayerViewPoint(Location, Rotator);

	FVector start = Location;
	FVector end = start + (Rotator.Vector() * fInteractionDistance);

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
	AddControllerYawInput(Rate * fBaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCPP::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * fBaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCPP::MoveForward(float Value)
{
	if ((Controller) && (Value != 0.0f))
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
	if ((Controller) && (Value != 0.0f))
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