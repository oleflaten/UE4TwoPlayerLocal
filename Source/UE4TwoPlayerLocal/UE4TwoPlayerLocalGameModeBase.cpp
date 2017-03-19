// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4TwoPlayerLocal.h"
#include "UE4TwoPlayerLocalGameModeBase.h"




AUE4TwoPlayerLocalGameModeBase::AUE4TwoPlayerLocalGameModeBase()
{
    
}



// Called when the game starts or when spawned
void AUE4TwoPlayerLocalGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    UGameplayStatics::CreatePlayer(this->GetWorld(), 0);
    UGameplayStatics::CreatePlayer(this->GetWorld(), 1);

}

