// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBloqueComposite.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBloqueComposite : public UInterface
{
	GENERATED_BODY()
};
/**
 * 
 */
class EX_FINAL_API IIBloqueComposite
{
	GENERATED_BODY()

public:
    // Método principal del Composite Pattern
    virtual void Execute() = 0;

    // Métodos para funcionalidad específica
    virtual void IniciarMovimiento() = 0;
    virtual void DetenerMovimiento() = 0;
    virtual bool EsDestructible() const = 0;
    virtual int32 GetCantidadBloques() const = 0;

    // Métodos de gestión para composites
    virtual void AgregarBloque(class ABloqueBase* Bloque) = 0;
    virtual void RemoverBloque(class ABloqueBase* Bloque) = 0;
    virtual TArray<class ABloqueBase*> GetBloques() const = 0;
};
