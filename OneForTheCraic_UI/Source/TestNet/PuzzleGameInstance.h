// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzleGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTNET_API UPuzzleGameInstance : public UGameInstance
{
	GENERATED_BODY()

//Want other classes to be able to construct this class
public:
		//Dont need to use virtual infront of constructors...?
		UPuzzleGameInstance(const FObjectInitializer & ObjectInitializer);

		virtual void Init();

		UFUNCTION(Exec)
			void Host();

		//UFUNCTION(Exec)
			//void HostListen();


		UFUNCTION(Exec)
			void Join(const FString& Address);

};
