#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

// Components
#include "MoverComponent.h"
#include "Components/CapsuleComponent.h"

#include "LevelPawn.generated.h"

UCLASS()
class DRIFTERS_API ALevelPawn : public APawn
{
public:
	// Sets default values for this pawn's properties
	ALevelPawn();

	UPROPERTY(EditAnywhere,
		BlueprintReadWrite,
		Category = "Components")
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere,
		BlueprintReadWrite,
		Category = "Components")
	UCapsuleComponent* Collision;
	
	UPROPERTY(EditAnywhere,
		BlueprintReadWrite,
		Category = "Components")
	UMoverComponent* MoverComponent;

private:
	GENERATED_BODY()
};
