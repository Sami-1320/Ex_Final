#include "BloqueIndestructible.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"

ABloqueIndestructible::ABloqueIndestructible()
{
    PrimaryActorTick.bCanEverTick = true;

    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    RootComponent = RootScene;

    bMovimientoActivo = false;
    TiempoMovimiento = 0.0f;
}

void ABloqueIndestructible::BeginPlay()
{
    Super::BeginPlay();
}

void ABloqueIndestructible::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bMovimientoActivo)
    {
        TiempoMovimiento += DeltaTime;
        ActualizarMovimientoIndestructible(DeltaTime);
    }
}

void ABloqueIndestructible::Execute()
{

    // Delegar ejecución a todos los bloques hijos
    for (ABloqueBase* Bloque : BloquesIndestructibles)
    {
        if (IsValid(Bloque))
        {
            FString TipoTexto = Bloque->GetBlockType();
        }
    }
}

void ABloqueIndestructible::IniciarMovimiento()
{
    bMovimientoActivo = true;
    TiempoMovimiento = 0.0f;

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan,
            FString::Printf(TEXT("Iniciando movimiento bloques INDESTRUCTIBLES (%d bloques)"), BloquesIndestructibles.Num()));
    }
}

void ABloqueIndestructible::DetenerMovimiento()
{
    bMovimientoActivo = false;
    TiempoMovimiento = 0.0f;

    // Restaurar rotaciones originales
    for (ABloqueBase* Bloque : BloquesIndestructibles)
    {
        if (IsValid(Bloque))
        {
            Bloque->SetActorRotation(FRotator::ZeroRotator);
        }
    }

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow,
            TEXT("Deteniendo movimiento bloques INDESTRUCTIBLES"));
    }
}

int32 ABloqueIndestructible::GetCantidadBloques() const
{
    return BloquesIndestructibles.Num();
}

void ABloqueIndestructible::AgregarBloque(ABloqueBase* Bloque)
{
    if (Bloque && !Bloque->IsDestructible() && !BloquesIndestructibles.Contains(Bloque))
    {
        BloquesIndestructibles.Add(Bloque);
        
    }
}

void ABloqueIndestructible::RemoverBloque(ABloqueBase* Bloque)
{
    if (Bloque)
    {
        BloquesIndestructibles.Remove(Bloque);
    }
}

TArray<ABloqueBase*> ABloqueIndestructible::GetBloques() const
{
    return BloquesIndestructibles;
}

void ABloqueIndestructible::LimpiarGrupo()
{
    BloquesIndestructibles.Empty();
}

void ABloqueIndestructible::ActualizarMovimientoIndestructible(float DeltaTime)
{
    // Rotación continua en el eje Y para todos los bloques indestructibles
    for (ABloqueBase* Bloque : BloquesIndestructibles)
    {
        if (IsValid(Bloque))
        {
            // Rotación en el eje Y (90 grados por segundo)
            float RotacionY = TiempoMovimiento * 90.0f;
            FRotator NuevaRotacion = FRotator(0.0f, RotacionY, 0.0f);
            Bloque->SetActorRotation(NuevaRotacion);
        }
    }
}