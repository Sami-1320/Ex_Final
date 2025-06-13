// INTERFAZ BUILDER

#pragma once

#include "BloqueBase.h"
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ILaberintoBuilder.generated.h"


UINTERFACE(MinimalAPI)
class UILaberintoBuilder : public UInterface
{
	GENERATED_BODY()
};

class EX_FINAL_API IILaberintoBuilder
{
	GENERATED_BODY()

public:
    // === MÉTODOS BÁSICOS DEL BUILDER ===
    virtual void AgregarPiso(int32 width, int32 height) = 0;
    virtual void AgregarPared(const FVector& Pos) = 0;
    virtual void AgregarLaberinto(const FVector& Pos) = 0;

    // === MÉTODOS DE CONFIGURACIÓN ===
    virtual void SetDimensiones(int32 width, int32 height) = 0;
    virtual void Reset() = 0;

    // === OBTENER RESULTADO ===
    virtual class ALaberintoBuilder* GetResultado() = 0;

    // === MÉTODOS DE ACCESO ===
    virtual int32 GetWidth() const = 0;
    virtual int32 GetHeight() const = 0;
    virtual float GetBlockSize() const = 0;
    virtual FVector GetOffset() const = 0;
};
