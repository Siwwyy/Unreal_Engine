// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <vector>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"


UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* StaticMesh_ptr;
	TArray<UStaticMeshComponent*> vec;
	//UPROPERTY(EditAnywhere, Category = "Components_Vector")
	//std::vector<UStaticMeshComponent*> vec;
	float Running_Time;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
