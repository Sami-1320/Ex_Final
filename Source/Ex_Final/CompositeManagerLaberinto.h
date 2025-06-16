// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloqueComposite.h"
#include "BloqueDestructible.h"
#include "BloqueIndestructible.h"
#include "BloqueBase.h"
#include "CompositeManagerLaberinto.generated.h"

UCLASS()
class EX_FINAL_API ACompositeManagerLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACompositeManagerLaberinto();

protected:
    virtual void BeginPlay() override;

    UPROPERTY()
    ABloqueDestructible* GrupoDestructible;

    UPROPERTY()
    ABloqueIndestructible* GrupoIndestructible;

private:
    bool bMovimientoActivo;

public:
    // Métodos principales
    void InicializarGrupos();
    void AgregarBloqueAlGrupo(ABloqueBase* Bloque);
    void EjecutarComposite();
    void ToggleMovimiento();
    void OrganizarBloquesExistentes();

    // Getters
    ABloqueDestructible* GetGrupoDestructible() const { return GrupoDestructible; }
    ABloqueIndestructible* GetGrupoIndestructible() const { return GrupoIndestructible; }
    bool IsMovimientoActivo() const { return bMovimientoActivo; }

private:
    void BuscarYOrganizarBloques();
};
