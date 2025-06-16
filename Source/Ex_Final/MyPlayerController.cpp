// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"

AMyPlayerController::AMyPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;
}

void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();

    // Iniciar la búsqueda del CompositeManager inmediatamente
    BuscarCompositeManager();
}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Input mappings existentes
    InputComponent->BindAction("LeftClick", IE_Pressed, this, &AMyPlayerController::OnLeftClick);
    InputComponent->BindAction("RightClick", IE_Pressed, this, &AMyPlayerController::OnRightClick);

    // Input mapping para iniciar/detener movimiento con tecla Y
    InputComponent->BindAction("StartCompositeMovement", IE_Pressed, this, &AMyPlayerController::OnStartCompositeMovement);
}

void AMyPlayerController::OnStartCompositeMovement()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White,
            TEXT("Tecla Y presionada - Alternando movimiento Composite"));
    }

    if (CompositeManager)
    {
        CompositeManager->ToggleMovimiento();
        FString EstadoMovimiento = CompositeManager->IsMovimientoActivo() ? TEXT("ACTIVADO") : TEXT("DESACTIVADO");
    }
    else
    {
        /*if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red,
                TEXT("CompositeManager no encontrado - Intentando buscar..."));
        }*/
        BuscarCompositeManager();
    }
}

void AMyPlayerController::BuscarCompositeManager()
{
    if (!GetWorld())
    {
        // Reintentar en el próximo tick si el mundo no está disponible
        GetWorldTimerManager().SetTimerForNextTick(this, &AMyPlayerController::BuscarCompositeManager);
        return;
    }

    bool bFound = false;
    for (TActorIterator<ACompositeManagerLaberinto> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        CompositeManager = *ActorItr;
        if (CompositeManager)
        {
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green,
                    TEXT("CompositeManager encontrado y vinculado"));
            }
            bFound = true;
            break;
        }
    }

    if (!bFound)
    {
        /*if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange,
                TEXT("CompositeManager no encontrado - Reintentando en 1 segundo..."));
        }*/
        // Reintentar después de 1 segundo
        GetWorldTimerManager().SetTimerForNextTick(this, &AMyPlayerController::BuscarCompositeManager);
    }
}

void AMyPlayerController::OnLeftClick()
{
    ABloqueBase* Block = GetBlockUnderCursor();
    if (Block)
    {
        DestroyBlock(Block);
    }
}

void AMyPlayerController::OnRightClick()
{
    ABloqueBase* Block = GetBlockUnderCursor();
    if (Block)
    {
        ShowBlockInfo(Block);
    }
}

ABloqueBase* AMyPlayerController::GetBlockUnderCursor()
{
    FVector WorldLocation, WorldDirection;
    if (DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
    {
        FVector Start = WorldLocation;
        FVector End = Start + (WorldDirection * 10000.0f);
        FHitResult HitResult;
        FCollisionQueryParams QueryParams;
        QueryParams.bTraceComplex = true;

        if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, QueryParams))
        {
            return Cast<ABloqueBase>(HitResult.GetActor());
        }
    }
    return nullptr;
}

void AMyPlayerController::DestroyBlock(ABloqueBase* Block)
{
    if (!Block || !Block->IsDestructible())
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Bloque indestructible"));
        }
        return;
    }

    ETipoBloque TipoBloque = Block->GetTipoBloque();
    switch (TipoBloque)
    {
    case ETipoBloque::Madera:
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Orange, TEXT("CRACK! Madera destruida"));
        break;
    case ETipoBloque::Concreto:
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Blue, TEXT("CRASH! Concreto destruido"));
        break;
    case ETipoBloque::Ladrillo:
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, TEXT("THUD! Ladrillo destruido"));
        break;
    case ETipoBloque::Burbuja:
        if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Cyan, TEXT("POP! Burbuja reventada"));
        break;
    default:
        break;
    }

    Block->Destroy();
}

void AMyPlayerController::ShowBlockInfo(ABloqueBase* Block)
{
    if (!Block) return;

    FString BlockType = Block->GetBlockType();
    bool bIsDestructible = Block->IsDestructible();
    FVector BlockLocation = Block->GetActorLocation();

    FString DestructibleText = bIsDestructible ? TEXT("DESTRUCTIBLE") : TEXT("INDESTRUCTIBLE");
    FColor TextColor = bIsDestructible ? FColor::Green : FColor::Red;
}