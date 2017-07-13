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
	FORCEINLINE FVector GetCurrentVelocity() { return CurrentVelocity; }
	/** Returns CurrentVelocity vector **/
	FORCEINLINE void SetCurrentVelocity(const FVector& newVelocity) { CurrentVelocity = newVelocity; }
	/** Returns CurrentVelocity vector **/
	FORCEINLINE void SetCurrentVelocityX(float x) { CurrentVelocity.X = x; }
	/** Returns CurrentVelocity vector **/
	FORCEINLINE void SetCurrentVelocityY(float y) { CurrentVelocity.Y = y; }

	UPROPERTY(EditAnywhere)
    float MovementSpeed = 250.0f;

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

	/* Movement variables */
	FVector CurrentVelocity;
};

