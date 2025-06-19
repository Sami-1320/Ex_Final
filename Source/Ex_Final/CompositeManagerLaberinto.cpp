#include "CompositeManagerLaberinto.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"

ACompositeManagerLaberinto::ACompositeManagerLaberinto()
{
    PrimaryActorTick.bCanEverTick = false;
    bMovimientoActivo = false;
}

void ACompositeManagerLaberinto::BeginPlay()
{
    Super::BeginPlay();
    InicializarGrupos();

    // Buscar bloques existentes después de un delay
    FTimerHandle OrganizarTimer;
    GetWorldTimerManager().SetTimer(OrganizarTimer, this, &ACompositeManagerLaberinto::OrganizarBloquesExistentes, 2.0f, false);
}

void ACompositeManagerLaberinto::InicializarGrupos()
{
    // Crear grupos composite
    GrupoDestructible = GetWorld()->SpawnActor<ABloqueDestructible>();
    GrupoIndestructible = GetWorld()->SpawnActor<ABloqueIndestructible>();

}

void ACompositeManagerLaberinto::AgregarBloqueAlGrupo(ABloqueBase* Bloque)
{
    if (!Bloque) return;

    // Los bloques de ACERO son indestructibles, los demás son destructibles
    if (Bloque->GetTipoBloque() == ETipoBloque::Acero)
    {
        if (GrupoIndestructible)
        {
            GrupoIndestructible->AgregarBloque(Bloque);
        }
    }
    else
    {
        if (GrupoDestructible)
        {
            GrupoDestructible->AgregarBloque(Bloque);
        }
    }
}

void ACompositeManagerLaberinto::OrganizarBloquesExistentes()
{
    BuscarYOrganizarBloques();

    // Ejecutar composite después de organizar
    FTimerHandle EjecutarTimer;
    GetWorldTimerManager().SetTimer(EjecutarTimer, this, &ACompositeManagerLaberinto::EjecutarComposite, 1.0f, false);
}

void ACompositeManagerLaberinto::BuscarYOrganizarBloques()
{
    if (!GetWorld()) return;

    int32 ContadorDestructibles = 0;
    int32 ContadorIndestructibles = 0;

    // Buscar todos los bloques en el mundo
    for (TActorIterator<ABloqueBase> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        ABloqueBase* Bloque = *ActorItr;
        if (Bloque)
        {
            AgregarBloqueAlGrupo(Bloque);

            if (Bloque->GetTipoBloque() == ETipoBloque::Acero)
                ContadorIndestructibles++;
            else
                ContadorDestructibles++;
        }
    }
}

void ACompositeManagerLaberinto::EjecutarComposite()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Magenta,
            TEXT("COMPOSITE EJECUTADO - Ejecutando todos los grupos"));
    }

    if (GrupoDestructible)
    {
        GrupoDestructible->Execute();
    }

    if (GrupoIndestructible)
    {
        GrupoIndestructible->Execute();
    }
}

void ACompositeManagerLaberinto::ToggleMovimiento()
{
    bMovimientoActivo = !bMovimientoActivo;

    if (bMovimientoActivo)
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green,
                TEXT("ACTIVANDO movimientos Composite"));
        }

        if (GrupoDestructible)
        {
            GrupoDestructible->IniciarMovimiento();
        }
        

        if (GrupoIndestructible)
        {
            GrupoIndestructible->IniciarMovimiento();
        }
       
    }
    else
    {
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red,
                TEXT("DESACTIVANDO movimientos Composite"));
        }

        if (GrupoDestructible) GrupoDestructible->DetenerMovimiento();
        if (GrupoIndestructible) GrupoIndestructible->DetenerMovimiento();
    }
}