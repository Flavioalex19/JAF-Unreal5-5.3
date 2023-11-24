// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "MyMainCharacter.generated.h"

UCLASS()
class TEST_JAF_API AMyMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Input)
	class UInputMappingContext* MyMapping;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Input)
	class UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Input)
	class UInputAction* LookAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* CameraBoom;
	class UCameraComponent* ViewCamera;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= CharacterVariables)
	int MaxHP = 3.;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= CharacterVariables)
	int HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterVariables)
	bool CanBeHit = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterVariables)
	bool Foda_se = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterVariables)
	bool Teste = true;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
