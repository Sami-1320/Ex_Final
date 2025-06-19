// PLAYER CONTROLLER MODIFICADO PARA MANEJAR NIVELES DEL FACADE

#include "MyPlayerController.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"

AMyPlayerController::AMyPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    // Inicializar referencias
    CompositeManager = nullptr;
    LaberintoFacade = nullptr;
}

void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();
    BuscarCompositeManager();
    BuscarLaberintoFacade();
}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Input mappings existentes
    InputComponent->BindAction("LeftClick", IE_Pressed, this, &AMyPlayerController::OnLeftClick);
    InputComponent->BindAction("RightClick", IE_Pressed, this, &AMyPlayerController::OnRightClick);
    InputComponent->BindAction("StartCompositeMovement", IE_Pressed, this, &AMyPlayerController::OnStartCompositeMovement);

    // Nuevos input mappings para niveles
    InputComponent->BindAction("Nivel0", IE_Pressed, this, &AMyPlayerController::OnNivel0_Randomico);
    InputComponent->BindAction("Nivel1", IE_Pressed, this, &AMyPlayerController::OnNivel1_Concreto);
    InputComponent->BindAction("Nivel2", IE_Pressed, this, &AMyPlayerController::OnNivel2_Ladrillo);
    InputComponent->BindAction("Nivel3", IE_Pressed, this, &AMyPlayerController::OnNivel3_Madera);
    InputComponent->BindAction("Nivel4", IE_Pressed, this, &AMyPlayerController::OnNivel4_Burbuja);
}

// === MÉTODOS DE INPUT PARA NIVELES ===
void AMyPlayerController::OnNivel0_Randomico()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White,
            TEXT("NIVEL 0 - RANDOMICO"));
    }
    CrearNivelConFacade(0);
}

void AMyPlayerController::OnNivel1_Concreto()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue,
            TEXT("NIVEL 1 - CONCRETO"));
    }
    CrearNivelConFacade(1);
}

void AMyPlayerController::OnNivel2_Ladrillo()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red,
            TEXT("NIVEL 2 - LADRILLO"));
    }
    CrearNivelConFacade(2);
}

void AMyPlayerController::OnNivel3_Madera()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange,
            TEXT("NIVEL 3 - MADERA"));
    }
    CrearNivelConFacade(3);
}

void AMyPlayerController::OnNivel4_Burbuja()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan,
            TEXT("NIVEL 4 - BURBUJA"));
    }
    CrearNivelConFacade(4);
}

void AMyPlayerController::OnStartCompositeMovement()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White,
            TEXT("Movimiento Composite"));
    }

    if (LaberintoFacade)
    {
        static bool bAnimacionesActivas = false;
        bAnimacionesActivas = !bAnimacionesActivas;
        LaberintoFacade->GestionarAnimaciones(bAnimacionesActivas);
    }
    else if (CompositeManager)
    {
        CompositeManager->ToggleMovimiento();
    }
    else
    {
        BuscarCompositeManager();
        BuscarLaberintoFacade();
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

// === MÉTODOS DE BÚSQUEDA ===

void AMyPlayerController::BuscarLaberintoFacade()
{
    if (!GetWorld())
    {
        GetWorldTimerManager().SetTimerForNextTick(this, &AMyPlayerController::BuscarLaberintoFacade);
        return;
    }

    for (TActorIterator<ALaberintoFacade> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        LaberintoFacade = *ActorItr;
        if (LaberintoFacade)
        {
			// Asegurarse de que el Facade esté inicializado
            return;
        }
    }

    GetWorldTimerManager().SetTimerForNextTick(this, &AMyPlayerController::BuscarLaberintoFacade);
}

void AMyPlayerController::BuscarCompositeManager()
{
    if (!GetWorld())
    {
        GetWorldTimerManager().SetTimerForNextTick(this, &AMyPlayerController::BuscarCompositeManager);
        return;
    }

    for (TActorIterator<ACompositeManagerLaberinto> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        CompositeManager = *ActorItr;
        if (CompositeManager)
        {
            return;
        }
    }

    GetWorldTimerManager().SetTimerForNextTick(this, &AMyPlayerController::BuscarCompositeManager);
}

// === MÉTODOS DE UTILIDAD ===

void AMyPlayerController::CrearNivelConFacade(int32 NumeroNivel)
{
    if (!LaberintoFacade)
    {
		// Si no se encontró el Facade, intentar buscarlo
        BuscarLaberintoFacade();
        return;
    }

    // El Facade se encarga de borrar y crear automáticamente
    LaberintoFacade->CrearLaberintoPorNivel(NumeroNivel, 20, 20);

    FTimerHandle InfoTimer;
    GetWorldTimerManager().SetTimer(InfoTimer, this, &AMyPlayerController::MostrarInfoNivel, 2.0f, false);
}

void AMyPlayerController::MostrarInfoNivel()
{
    if (!LaberintoFacade || !GEngine) return;

    if (LaberintoFacade->IsLaberintoCreado())
    {
        int32 NivelActual = LaberintoFacade->GetNivelActual();
        FString NombreNivel = LaberintoFacade->GetNombreNivel();
        int32 BloquesDestructibles = LaberintoFacade->GetCantidadBloquesDestructibles();
        int32 BloquesIndestructibles = LaberintoFacade->GetCantidadBloquesIndestructibles();
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

    FString DestructibleText = bIsDestructible ? TEXT("DESTRUCTIBLE") : TEXT("INDESTRUCTIBLE");
    FColor TextColor = bIsDestructible ? FColor::Green : FColor::Red;

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, TextColor,
            FString::Printf(TEXT("BLOQUE: %s - %s"), *BlockType, *DestructibleText));
    }
}