// Copyright Epic Games, Inc. All Rights Reserved.
#include "Ex_FinalGameMode.h"
#include "Engine/World.h"
#include "Niveles.h"
#include "GameFramework/DefaultPawn.h"

AEx_FinalGameMode::AEx_FinalGameMode()
{
    PrimaryActorTick.bCanEverTick = false;

    // Establecer AMyPlayerController como la clase de PlayerController usando la propiedad heredada
    PlayerControllerClass = AMyPlayerController::StaticClass();

    // Establecer el Pawn por defecto usando la propiedad heredada
    DefaultPawnClass = ADefaultPawn::StaticClass();
}

void AEx_FinalGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Asegurar que el PlayerController se genere
    if (PlayerControllerClass)
    {
        PlayerController = GetWorld()->SpawnActor<APlayerController>(PlayerControllerClass);
        if (PlayerController)
        {
            // Generar el Pawn y poseerlo con el PlayerController
            if (DefaultPawnClass)
            {
                FVector SpawnLocation(0.0f, 0.0f, 100.0f); // Ajusta la ubicación según tu nivel
                FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
                APawn* NewPawn = GetWorld()->SpawnActor<APawn>(DefaultPawnClass, SpawnLocation, SpawnRotation);
                if (NewPawn)
                {
                    PlayerController->Possess(NewPawn);
                    if (GEngine)
                    {
                        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green,
                            TEXT("PlayerController y Pawn generados correctamente"));
                    }
                }
            }
        }
        else
        {
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red,
                    TEXT("Error: No se pudo generar el PlayerController"));
            }
        }
    }

    // Crear el laberinto después de un pequeño retraso
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AEx_FinalGameMode::CreateMaze, 0.1f, false);
}

void AEx_FinalGameMode::CreateMaze()
{
    if (Director || LaberintoBuilder) return; // Evitar duplicados

    // 1. PASO: Crear laberinto con Builder Pattern
    LaberintoBuilder = GetWorld()->SpawnActor<ALaberintoBuilder>();
    if (!LaberintoBuilder) return;

    Director = GetWorld()->SpawnActor<ADirectorBuilder>();
    if (!Director) return;

    // Usar el Builder para crear el laberinto
    Director->SetBuilder(Cast<AActor>(LaberintoBuilder));
    Director->CrearLaberintoCompleto(20, 20);

    // 2. PASO: Inicializar Composite después del Builder
    FTimerHandle CompositeTimerHandle;
    GetWorldTimerManager().SetTimer(CompositeTimerHandle, this, &AEx_FinalGameMode::InicializarComposite, 1.5f, false);
}

void AEx_FinalGameMode::InicializarComposite()
{
    // Crear el CompositeManager
    CompositeManager = GetWorld()->SpawnActor<ACompositeManagerLaberinto>();

    if (GEngine && CompositeManager)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Magenta,
            TEXT("Composite Manager inicializado - Organizando bloques del laberinto"));
    }
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
    if (CompositeManager) CompositeManager->Destroy();

    // Crear nuevo laberinto
    LaberintoBuilder = GetWorld()->SpawnActor<ALaberintoBuilder>();
    Director = GetWorld()->SpawnActor<ADirectorBuilder>();

    if (Director && LaberintoBuilder)
    {
        Director->SetBuilder(Cast<AActor>(LaberintoBuilder));
        Director->CrearLaberintoCompleto(Width, Height);

        // Recrear composite con nuevos bloques
        FTimerHandle RecreateTimerHandle;
        GetWorldTimerManager().SetTimer(RecreateTimerHandle, this, &AEx_FinalGameMode::InicializarComposite, 1.5f, false);
    }
}