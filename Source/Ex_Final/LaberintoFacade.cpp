// FACADE PATTERN - Implementación

#include "LaberintoFacade.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"
#include "Niveles.h"
#include "Kismet/GameplayStatics.h"

ALaberintoFacade::ALaberintoFacade()
{
    PrimaryActorTick.bCanEverTick = false;

    // Configuraciones por defecto
    AnchoLaberinto = 20;
    AltoLaberinto = 20;
    NivelActual = ETipoLaberinto::Randomico;
    NumeroNivel = 0;

    // Estado inicial
    bLaberintoCreado = false;
    bCompositeInicializado = false;

    // Referencias (se inicializarán en BeginPlay)
    Director = nullptr;
    LaberintoBuilder = nullptr;
    CompositeManager = nullptr;
    Niveles = nullptr;
}

void ALaberintoFacade::BeginPlay()
{
    Super::BeginPlay();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue,
            TEXT("FACADE PATTERN: LaberintoFacade inicializado - Nivel 0 (Randomico)"));
    }
}

void ALaberintoFacade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// === MÉTODOS PRINCIPALES DEL FACADE ===

void ALaberintoFacade::CrearLaberintoPorNivel(int32 Nivel, int32 Ancho, int32 Alto)
{
    ETipoLaberinto TipoNivel = static_cast<ETipoLaberinto>(Nivel % 5);
    NumeroNivel = Nivel;
    CrearLaberinto(Ancho, Alto, TipoNivel);
}

void ALaberintoFacade::CrearLaberinto(int32 Ancho, int32 Alto, ETipoLaberinto TipoNivel)
{

    // Validar parámetros
    if (!ValidarDimensiones(Ancho, Alto))
    {
		// Mostrar mensaje de error y salir
        return;
    }

    // Limpiar mapa anterior
    LimpiarTodosLosSubsistemas();

    // Actualizar configuración
    NivelActual = TipoNivel;
    AnchoLaberinto = Ancho;
    AltoLaberinto = Alto;

    // Crear nuevo mapa con delay para asegurar limpieza completa
    FTimerHandle CreacionTimer;
    GetWorldTimerManager().SetTimer(CreacionTimer, [this, Ancho, Alto, TipoNivel]()
        {
            InicializarSubsistemaBuilder();
            InicializarSubsistemaNiveles();
            EjecutarConstruccionLaberinto(Ancho, Alto, TipoNivel);

            // Inicializar Composite con delay
            FTimerHandle CompositeTimer;
            GetWorldTimerManager().SetTimer(CompositeTimer, this, &ALaberintoFacade::InicializarSubsistemaComposite, 1.5f, false);

            bLaberintoCreado = true;

        }, 0.5f, false);
}

void ALaberintoFacade::AvanzarAlSiguienteNivel()
{
    NumeroNivel++;
    ETipoLaberinto SiguienteNivel = static_cast<ETipoLaberinto>(NumeroNivel % 5);

    CrearLaberinto(AnchoLaberinto, AltoLaberinto, SiguienteNivel);
}

void ALaberintoFacade::ResetearNivelActual()
{
    CrearLaberinto(AnchoLaberinto, AltoLaberinto, NivelActual);
}

void ALaberintoFacade::GestionarAnimaciones(bool bActivar)
{
    if (!bCompositeInicializado || !CompositeManager)
    {
        return;
    }

    if (bActivar)
    {
        CompositeManager->ToggleMovimiento();
    }
    else
    {
        if (CompositeManager->IsMovimientoActivo())
        {
            CompositeManager->ToggleMovimiento();
        }
        
    }
}

void ALaberintoFacade::InicializarSistemaCompleto()
{
    CrearLaberinto(20, 20, ETipoLaberinto::Randomico);
}

FString ALaberintoFacade::GetNombreNivel() const
{
    switch (NivelActual)
    {
    case ETipoLaberinto::Randomico: return TEXT("Randomico");
    case ETipoLaberinto::Concreto: return TEXT("Concreto");
    case ETipoLaberinto::Ladrillo: return TEXT("Ladrillo");
    case ETipoLaberinto::Madera: return TEXT("Madera");
    case ETipoLaberinto::Burbuja: return TEXT("Burbuja");
    default: return TEXT("Desconocido");
    }
}

// === MÉTODOS DE INFORMACIÓN ===

int32 ALaberintoFacade::GetCantidadBloquesDestructibles() const
{
    if (!bCompositeInicializado || !CompositeManager || !CompositeManager->GetGrupoDestructible())
        return 0;
    return CompositeManager->GetGrupoDestructible()->GetCantidadBloques();
}

int32 ALaberintoFacade::GetCantidadBloquesIndestructibles() const
{
    if (!bCompositeInicializado || !CompositeManager || !CompositeManager->GetGrupoIndestructible())
        return 0;
    return CompositeManager->GetGrupoIndestructible()->GetCantidadBloques();
}

FVector ALaberintoFacade::GetTamanoLaberinto() const
{
    if (!LaberintoBuilder)
        return FVector::ZeroVector;

    float BlockSize = LaberintoBuilder->GetBlockSize();
    return FVector(AnchoLaberinto * BlockSize, AltoLaberinto * BlockSize, BlockSize);
}

// === MÉTODOS DE UTILIDAD ===

void ALaberintoFacade::CrearEspaciosLibres(int32 NumeroEspacios)
{
    if (!LaberintoBuilder) return;

    for (int32 i = 0; i < NumeroEspacios; i++)
    {
        int32 RandomX = FMath::RandRange(2, AnchoLaberinto - 3);
        int32 RandomY = FMath::RandRange(2, AltoLaberinto - 3);

        for (int32 dx = 0; dx < 2; dx++)
        {
            for (int32 dy = 0; dy < 2; dy++)
            {
                if (RandomX + dx < AnchoLaberinto - 1 && RandomY + dy < AltoLaberinto - 1)
                {
                    LaberintoBuilder->SetTile(RandomX + dx, RandomY + dy, ETipoBloque::Vacio);
                }
            }
        }
    }
}

bool ALaberintoFacade::IsPosicionLibre(const FVector& Posicion) const
{
    if (!LaberintoBuilder) return false;

    FVector Offset = LaberintoBuilder->GetOffset();
    float BlockSize = LaberintoBuilder->GetBlockSize();

    FVector RelativePos = Posicion - Offset;
    int32 TileX = FMath::RoundToInt(RelativePos.X / BlockSize);
    int32 TileY = FMath::RoundToInt(RelativePos.Y / BlockSize);

    if (TileX >= 0 && TileX < AnchoLaberinto && TileY >= 0 && TileY < AltoLaberinto)
    {
        return LaberintoBuilder->GetTile(TileX, TileY) == ETipoBloque::Vacio;
    }

    return false;
}

FVector ALaberintoFacade::GetPosicionAleatoriLibre() const
{
    if (!LaberintoBuilder) return FVector::ZeroVector;

    for (int32 Intentos = 0; Intentos < 50; Intentos++)
    {
        int32 RandomX = FMath::RandRange(1, AnchoLaberinto - 2);
        int32 RandomY = FMath::RandRange(1, AltoLaberinto - 2);

        if (LaberintoBuilder->GetTile(RandomX, RandomY) == ETipoBloque::Vacio)
        {
            FVector Offset = LaberintoBuilder->GetOffset();
            float BlockSize = LaberintoBuilder->GetBlockSize();
            return Offset + FVector(RandomX * BlockSize, RandomY * BlockSize, BlockSize);
        }
    }

    // Posición por defecto si no encuentra libre
    FVector Offset = LaberintoBuilder->GetOffset();
    float BlockSize = LaberintoBuilder->GetBlockSize();
    return Offset + FVector(BlockSize, BlockSize, BlockSize);
}

// === MÉTODOS PRIVADOS ===

void ALaberintoFacade::InicializarSubsistemaBuilder()
{
    if (!GetWorld()) return;

    if (!LaberintoBuilder)
        LaberintoBuilder = GetWorld()->SpawnActor<ALaberintoBuilder>();

    if (!Director)
        Director = GetWorld()->SpawnActor<ADirectorBuilder>();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow,
            TEXT("FACADE: Subsistema Builder inicializado"));
    }
}

void ALaberintoFacade::InicializarSubsistemaNiveles()
{
    if (!GetWorld()) return;

    if (!Niveles)
        Niveles = GetWorld()->SpawnActor<ANiveles>();

    if (Niveles && LaberintoBuilder)
    {
        Niveles->SetLaberintoRef(LaberintoBuilder);
        Niveles->Inicializar(AnchoLaberinto, AltoLaberinto);
    }
}

void ALaberintoFacade::EjecutarConstruccionLaberinto(int32 Ancho, int32 Alto, ETipoLaberinto TipoNivel)
{
    if (!ValidarEstadoSubsistemas()) return;

    Director->SetBuilder(Cast<AActor>(LaberintoBuilder));
    LaberintoBuilder->AgregarPiso(Ancho, Alto);

    if (Niveles)
        Niveles->CrearParedesExteriores(LaberintoBuilder);

    ConfigurarNivelEspecifico(TipoNivel);
}

void ALaberintoFacade::ConfigurarNivelEspecifico(ETipoLaberinto TipoNivel)
{
    if (!LaberintoBuilder || !Niveles) return;

    ETipoBloque TipoBloque = ConvertirTipoLaberintoATipoBloque(TipoNivel);
    FVector Offset = LaberintoBuilder->GetOffset();
    float CellSize = LaberintoBuilder->GetBlockSize();

    for (int32 X = 1; X < AnchoLaberinto - 1; X++)
    {
        for (int32 Y = 1; Y < AltoLaberinto - 1; Y++)
        {
            FVector Pos = Offset + FVector(X * CellSize, Y * CellSize, CellSize);

            int32 RandomValue = FMath::RandRange(1, 100);
            
            if (RandomValue > 50)
            {
                if (TipoNivel == ETipoLaberinto::Randomico)
                {
                    LaberintoBuilder->AgregarLaberinto(Pos);
                }
                else
                {
                    LaberintoBuilder->SetTile(X, Y, TipoBloque);
                    ABloqueBase* Bloque = LaberintoBuilder->CrearBloque(TipoBloque, Pos);
                    if (Bloque)
                        Bloque->SetDestructible(true);
                }
            }
        }
    }

    Niveles->CrearEspaciosLibres(LaberintoBuilder, 3);
}

ETipoBloque ALaberintoFacade::ConvertirTipoLaberintoATipoBloque(ETipoLaberinto TipoNivel)
{
    switch (TipoNivel)
    {
    case ETipoLaberinto::Concreto: return ETipoBloque::Concreto;
    case ETipoLaberinto::Ladrillo: return ETipoBloque::Ladrillo;
    case ETipoLaberinto::Madera: return ETipoBloque::Madera;
    case ETipoLaberinto::Burbuja: return ETipoBloque::Burbuja;
    default: return ETipoBloque::Vacio;
    }
}

void ALaberintoFacade::InicializarSubsistemaComposite()
{
    if (!CompositeManager)
        CompositeManager = GetWorld()->SpawnActor<ACompositeManagerLaberinto>();

    if (CompositeManager)
    {
        bCompositeInicializado = true;

        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green,
                TEXT("FACADE: Subsistema Composite inicializado"));
        }
    }
}

void ALaberintoFacade::LimpiarTodosLosSubsistemas()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red,
            TEXT("FACADE: Limpiando TODOS los subsistemas..."));
    }

    // Limpiar LaberintoBuilder (destruye bloques físicamente)
    if (LaberintoBuilder)
    {
        LaberintoBuilder->Reset();
        LaberintoBuilder->Destroy();
        LaberintoBuilder = nullptr;
    }

    // Limpiar otros componentes
    if (Director)
    {
        Director->Destroy();
        Director = nullptr;
    }

    if (CompositeManager)
    {
        CompositeManager->Destroy();
        CompositeManager = nullptr;
    }

    if (Niveles)
    {
        Niveles->Destroy();
        Niveles = nullptr;
    }

    // Búsqueda adicional de bloques restantes
    if (GetWorld())
    {
        TArray<AActor*> BloquesRestantes;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueBase::StaticClass(), BloquesRestantes);

        for (AActor* Bloque : BloquesRestantes)
        {
            if (IsValid(Bloque))
                Bloque->Destroy();
        }
    }

    // Resetear estados
    bLaberintoCreado = false;
    bCompositeInicializado = false;

}

bool ALaberintoFacade::ValidarEstadoSubsistemas() const
{
    return (Director != nullptr && LaberintoBuilder != nullptr && Niveles != nullptr);
}

bool ALaberintoFacade::ValidarDimensiones(int32 Ancho, int32 Alto) const
{
    return (Ancho >= 10 && Ancho <= 50 && Alto >= 10 && Alto <= 50);
}

