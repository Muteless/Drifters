#include "Drifters/Public/Framework/Player/Level/LevelPawn.h"


// Sets default values
ALevelPawn::ALevelPawn()
{
	// Instantiate capsule component
	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	RootComponent = Collision;

	// Instantiate mesh component
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);
	
	// Instantiate mover component
	MoverComponent = CreateDefaultSubobject<UMoverComponent>(TEXT("MoverComponent"));

	// Constrain movement to X plain
	MoverComponent->SetPlanarConstraint(FPlanarConstraint
		(
		true,
		FVector(1.0f, 0.0f, 0.0f),
		FVector(0, 0, 0)
		));
	
	// Let the mover component handle movement replication
	SetReplicateMovement(false);
}