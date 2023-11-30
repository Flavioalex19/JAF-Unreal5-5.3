// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCs.generated.h"

UCLASS()
class TEST_JAF_API ANPCs : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCs();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Dialogue Variable")
	int TalkIndex = -1;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
