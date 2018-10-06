// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Battletank.h"
#include "Tank.h"
#include "Engine/World.h"

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		ControlledTank->Fire(); //TODO don't fire every frame
	}
	
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

