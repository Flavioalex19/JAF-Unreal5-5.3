// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/NPCs.h"

// Sets default values
ANPCs::ANPCs()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCs::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCs::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

