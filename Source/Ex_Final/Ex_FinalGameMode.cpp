// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ex_FinalGameMode.h"
#include "Engine/World.h"
#include "GameFramework/DefaultPawn.h"

AEx_FinalGameMode::AEx_FinalGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
    PlayerControllerClass = AMyPlayerController::StaticClass();
    DefaultPawnClass = ADefaultPawn::StaticClass();
    LaberintoFacade = nullptr;
}

void AEx_FinalGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Configurar PlayerController y Pawn
    if (PlayerControllerClass)
    {
        PlayerController = GetWorld()->SpawnActor<APlayerController>(PlayerControllerClass);
        if (PlayerController && DefaultPawnClass)
        {
            FVector SpawnLocation(0.0f, 0.0f, 100.0f);
            FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
            APawn* NewPawn = GetWorld()->SpawnActor<APawn>(DefaultPawnClass, SpawnLocation, SpawnRotation);
            if (NewPawn)
            {
                PlayerController->Possess(NewPawn);
            }
        }
    }

    // Crear laberinto usando Facade Pattern
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AEx_FinalGameMode::CreateMaze, 0.1f, false);
}

void AEx_FinalGameMode::CreateMaze()
{
    if (LaberintoFacade) return;

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Blue,
            TEXT("Usando FACADE PATTERN "));
    }

    LaberintoFacade = GetWorld()->SpawnActor<ALaberintoFacade>();
    
    if (LaberintoFacade)
    {
        LaberintoFacade->InicializarSistemaCompleto();
    }
}
