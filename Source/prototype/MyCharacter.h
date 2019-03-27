// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS(config=Game)
class AMyCharacter : public ACharacter
{
	GENERATED_BODY()
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(
		VisibleAnyWhere,
		BluePrintReadOnly,
		Category = Camera,
		meta = (AllowPrivateAccess = "true")
	)
	class USpringArmComponent* CameraBoom;
	/** Follow camera */
	UPROPERTY(VisibleAnywhere,
		BluePrintReadOnly,
		Category = Camera,
		meta = (AllowPrivateAccess = "true")
	)
	class UCameraComponent* FollowCamera;
		
public:
	// Sets default values for this character's properties
	AMyCharacter();
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(
		VisibleAnywhere,
		BluePrintReadOnly,
		Category = Camera
	)
	float baseTurnRate;
	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(
		VisibleAnywhere,
		BluePrintReadOnly,
		Category = Camera
	)
	float baseLookUpRate;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/**Called for Forward and Backward input*/
	void MoveForward(float value);

	/**Called for side to side input*/
	void MoveRight(float value);

	/**
	*Called via input to turn at a given rate 
	*@param Rate This is a normalized rate, i.e 1.0 means 100% of desired turn rate
	*/
	void TurnAtRate(float Rate);

	/**
	*called via input to look up/down at a given rate
	*@param Rate This is a normalized rate, i.e 1.0 means 100% of desired turn rate 
	*/ 
	void LookUpAtRate(float Rate);
	
	/**
	 Resets HMD orientation in VR. 
		void OnResetVR();

	Handler for when a touch input begins.
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	Handler for when a touch input stops.
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);
	
	*/
protected:
	

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	/*returns camera boom subobject */
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/*returns followCamera subobject */
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	
	
};
