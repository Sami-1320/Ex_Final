// Copyright Epic Games, Inc. All Rights Reserved.
#include "Ex_FinalGameMode.h" 
#include "Engine/World.h"
#include "Niveles.h"

// Constructor
AEx_FinalGameMode::AEx_FinalGameMode() 
{
    PrimaryActorTick.bCanEverTick = false;
}

void AEx_FinalGameMode::BeginPlay()
{
    Super::BeginPlay();
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AEx_FinalGameMode::CreateMaze, 0.1f, false);
}

void AEx_FinalGameMode::CreateMaze()
{
    if (Director || LaberintoBuilder) return; // Evitar duplicados

    // Crear el builder
    LaberintoBuilder = GetWorld()->SpawnActor<ALaberintoBuilder>();
    if (!LaberintoBuilder) return;

    // Crear el director
    Director = GetWorld()->SpawnActor<ADirectorBuilder>();
    if (!Director) return;

    // SOLUCIÓN: Cast explícito para evitar ambigüedad
    Director->SetBuilder(Cast<AActor>(LaberintoBuilder));

    // O usar el método de interfaz directamente:
    // Director->SetBuilder(static_cast<IILaberintoBuilder*>(LaberintoBuilder));

    Director->CrearLaberintoCompleto(20, 20);
}

void AEx_FinalGameMode::CreateNewMaze(int32 Width, int32 Height)
{
    // Limpiar laberinto anterior
    if (LaberintoBuilder)
    {
        LaberintoBuilder->Reset();
        LaberintoBuilder->Destroy();
    }
    if (Director) Director->Destroy();

    // Crear nuevo laberinto
    LaberintoBuilder = GetWorld()->SpawnActor<ALaberintoBuilder>();
    Director = GetWorld()->SpawnActor<ADirectorBuilder>();

    if (Director && LaberintoBuilder)
    {
        // SOLUCIÓN: Cast explícito
        Director->SetBuilder(Cast<AActor>(LaberintoBuilder));
        Director->CrearLaberintoCompleto(Width, Height);

    }
}