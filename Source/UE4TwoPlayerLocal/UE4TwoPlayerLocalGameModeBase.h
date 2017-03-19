// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "UE4TwoPlayerLocalGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class UE4TWOPLAYERLOCAL_API AUE4TwoPlayerLocalGameModeBase : public AGameModeBase
{
    GENERATED_BODY()
    
public:
    AUE4TwoPlayerLocalGameModeBase();
    
    
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    
    
    
};
