#include "BloqueDestructible.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"

ABloqueDestructible::ABloqueDestructible()
{
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    RootComponent = RootScene;

    bMovimientoActivo = false;
    TiempoMovimiento = 0.0f;
}

void ABloqueDestructible::BeginPlay()
{
    Super::BeginPlay();
}

void ABloqueDestructible::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bMovimientoActivo)
    {
        TiempoMovimiento += DeltaTime;
        ActualizarMovimientoDestructible(DeltaTime);
    }
}

void ABloqueDestructible::Execute()
{

    // Delegar ejecución a todos los bloques hijos
    for (ABloqueBase* Bloque : BloquesDestructibles)
    {
        if (IsValid(Bloque))
        {
            FString TipoTexto = Bloque->GetBlockType();
        }
    }
}

void ABloqueDestructible::IniciarMovimiento()
{
    bMovimientoActivo = true;
    TiempoMovimiento = 0.0f;
}

void ABloqueDestructible::DetenerMovimiento()
{
    bMovimientoActivo = false;
    TiempoMovimiento = 0.0f;

    // Restaurar posiciones originales
    for (int32 i = 0; i < BloquesDestructibles.Num(); i++)
    {
        if (IsValid(BloquesDestructibles[i]) && PosicionesOriginales.IsValidIndex(i))
        {
            BloquesDestructibles[i]->SetActorLocation(PosicionesOriginales[i]);
        }
    }

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow,
            TEXT("Deteniendo movimiento bloques DESTRUCTIBLES"));
    }
}

int32 ABloqueDestructible::GetCantidadBloques() const
{
    return BloquesDestructibles.Num();
}

void ABloqueDestructible::AgregarBloque(ABloqueBase* Bloque)
{
    if (Bloque && Bloque->IsDestructible() && !BloquesDestructibles.Contains(Bloque))
    {
        BloquesDestructibles.Add(Bloque);
        PosicionesOriginales.Add(Bloque->GetActorLocation()); // Guardar posición original
        
    }
}

void ABloqueDestructible::RemoverBloque(ABloqueBase* Bloque)
{
    if (Bloque)
    {
        int32 Index = BloquesDestructibles.Find(Bloque);
        if (Index != INDEX_NONE)
        {
            BloquesDestructibles.RemoveAt(Index);
            if (PosicionesOriginales.IsValidIndex(Index))
            {
                PosicionesOriginales.RemoveAt(Index);
            }
        }
    }
}

TArray<ABloqueBase*> ABloqueDestructible::GetBloques() const
{
    return BloquesDestructibles;
}

void ABloqueDestructible::LimpiarGrupo()
{
    BloquesDestructibles.Empty();
    PosicionesOriginales.Empty();
}

void ABloqueDestructible::ActualizarMovimientoDestructible(float DeltaTime)
{
    // Movimiento oscilante de 10 unidades (100 cm) para todos los bloques
    for (int32 i = 0; i < BloquesDestructibles.Num(); i++)
    {
        if (IsValid(BloquesDestructibles[i]) && PosicionesOriginales.IsValidIndex(i))
        {
            // Calcular desplazamiento sinusoidal (10 unidades = 100 cm)
            float DesplazamientoX = FMath::Sin(TiempoMovimiento * 2.0f) * 100.0f; // Amplitud de 100 cm

            // Aplicar desplazamiento a la posición original
            FVector NuevaPosicion = PosicionesOriginales[i];
            NuevaPosicion.X += DesplazamientoX;

            BloquesDestructibles[i]->SetActorLocation(NuevaPosicion);
        }
    }
}