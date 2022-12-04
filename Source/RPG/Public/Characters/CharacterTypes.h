#pragma once


UENUM(BlueprintType)
enum class ECharacterState : uint8 {
	ECS_UnEquipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandWeapon UMETA(DisplayName = "EquippedOneHandWeapon"),
	ECS_EquippedTwoHandWeapon UMETA(DisplayName = "EquippedTwoHandWeapon"),
};
