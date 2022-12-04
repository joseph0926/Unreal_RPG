// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/RPGAnimInstance.h"
#include "Characters/RPGCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void URPGAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	RPGCharacter = Cast<ARPGCharacter>(TryGetPawnOwner());
	if (RPGCharacter) {
		RPGCharacterMovement = RPGCharacter->GetCharacterMovement();
	}
}

void URPGAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (RPGCharacterMovement) {
		GroundSpeed = UKismetMathLibrary::VSizeXY(RPGCharacterMovement->Velocity);
		IsFalling =  RPGCharacterMovement->IsFalling();
		CharacterState = RPGCharacter->GetCharacterState();
	}
}
