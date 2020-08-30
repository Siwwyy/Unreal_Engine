
#include "Engine/Public/CollisionQueryParams.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "../Public/Interaction_Component.h"
#include "../Public/Interaction_Interface.h"


UInteraction_Component::UInteraction_Component():
	FocusedActor(nullptr),
	fInteractionDistance(200.f)
{
	PrimaryComponentTick.bCanEverTick = true;

	TraceParams = FCollisionQueryParams(FName(TEXT("Trace")), true);
	Player = Cast<ACharacter>(GetOwner());
}

void UInteraction_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	HandleHighlight();
}

void UInteraction_Component::Interaction()
{
	if (FocusedActor)
	{
		if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor))
		{
			Interface->Execute_OnInteract(FocusedActor, Player);
		}
	}
}

void UInteraction_Component::HandleHighlight()
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
		if (!FocusedActor)
		{
			return;
		}

		if (IInteraction_Interface* Interface = Cast<IInteraction_Interface>(FocusedActor))
		{
			Interface->Execute_Focus(FocusedActor, false);
		}
		FocusedActor = nullptr;
	}
}

AActor* UInteraction_Component::FindActorInLineOfSide()
{
	FVector Location;
	FRotator Rotator{};
	FHitResult Hit(ForceInit);
	Location.Normalize();	//to unit vector as a vector initialization
	Rotator.Normalize();	//to unit vector as a vector initialization
	Player->GetController()->GetPlayerViewPoint(Location, Rotator);

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

void UInteraction_Component::BeginPlay()
{
	Super::BeginPlay();

	if (UInputComponent* PlayerInputComponent = GetOwner()->FindComponentByClass<UInputComponent>())
	{
		PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &UInteraction_Component::Interaction);
	}
}