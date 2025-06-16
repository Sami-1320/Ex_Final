#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBloqueComposite.h"
#include "BloqueBase.h"
#include "BloqueIndestructible.generated.h"

UCLASS()
class EX_FINAL_API ABloqueIndestructible : public AActor, public IIBloqueComposite
{
    GENERATED_BODY()

public:
    ABloqueIndestructible();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UPROPERTY()
    USceneComponent* RootScene;

    // Variables de movimiento
    UPROPERTY()
    bool bMovimientoActivo;

    UPROPERTY()
    float TiempoMovimiento;

private:
    TArray<ABloqueBase*> BloquesIndestructibles;

public:
    // Implementación de IIBloqueComposite
    virtual void Execute() override;
    virtual void IniciarMovimiento() override;
    virtual void DetenerMovimiento() override;
    virtual bool EsDestructible() const override { return false; }
    virtual int32 GetCantidadBloques() const override;

    // Métodos de gestión del composite
    virtual void AgregarBloque(ABloqueBase* Bloque) override;
    virtual void RemoverBloque(ABloqueBase* Bloque) override;
    virtual TArray<ABloqueBase*> GetBloques() const override;

    // Métodos específicos
    void LimpiarGrupo();

private:
    void ActualizarMovimientoIndestructible(float DeltaTime);
};