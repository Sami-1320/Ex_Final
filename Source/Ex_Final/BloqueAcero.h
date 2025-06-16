// PRODUCTO CONCRETO

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueAcero.generated.h"

/**
 *
 */
UCLASS()
class EX_FINAL_API ABloqueAcero : public ABloqueBase
{
    GENERATED_BODY()

public:
    ABloqueAcero();
    virtual void ConfigurarBloque() override;

private:
    UPROPERTY()
    UMaterialInterface* SteelMaterial;
};