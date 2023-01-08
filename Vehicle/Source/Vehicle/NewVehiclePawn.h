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

	// 차량 조종
	void ApplyThrottle(float Val);
	void ApplySteering(float Val);

	// 시야 조정
	void LookUp(float Val);
	void Turn(float Val);

	// 사이드 브레이크
	void OnHandbrakePressed();
	void OnHandbrakeReleased();

	// 공중 제어
	void UpdateInAirControl(float DeltaTime);

protected:

	// 스프링 암
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* SpringArm;

	// 카메라
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* Camera;
};
