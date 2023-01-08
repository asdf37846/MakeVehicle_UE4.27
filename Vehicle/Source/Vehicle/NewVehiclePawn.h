// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "NewVehiclePawn.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLE_API ANewVehiclePawn : public AWheeledVehicle
{
	GENERATED_BODY()
public:

	ANewVehiclePawn();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void ApplyThrottle(float Val);
};
