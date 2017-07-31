// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AgileCharacter.generated.h"

UCLASS(Blueprintable)
class AAgileCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAgileCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }
	/** Returns CurrentVelocity vector **/
	FORCEINLINE FVector GetCurrentVelocity() { return CurrentVelocity.GetSafeNormal() * MovementSpeed; }
	/** Sets CurrentVelocity x value **/
	FORCEINLINE void SetCurrentVelocityX(float x) { CurrentVelocity.X = x; }
	/** Returns CurrentVelocity y value **/
	FORCEINLINE void SetCurrentVelocityY(float y) { CurrentVelocity.Y = y; }

	FORCEINLINE bool GetCanMove() { return bCanMove; }
	FORCEINLINE void SetCanMove(bool canMove) { bCanMove = canMove; }
	
	UPROPERTY(EditAnywhere)
    float MovementSpeed = 500.0f;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;

	//void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/* Movement variables */
	FVector CurrentVelocity;

	/* Camera variables */
	FRotator CameraOrientation;
	float CameraDistance;

	bool bCanMove;
};

