//BASE
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "BloqueBase.generated.h"

UENUM(BlueprintType)
enum class ETipoBloque : uint8
{
    Vacio = 0,
    Acero = 1,
    Madera = 2,
    Ladrillo = 3,
    Concreto = 4,
    Burbuja = 5
};


UCLASS()
class EX_FINAL_API ABloqueBase : public AActor
{
    GENERATED_BODY()

public:	
	
	ABloqueBase();

protected:

    bool bIsDestructible;
    FString BlockType;
    ETipoBloque TipoBloque;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    UPROPERTY()
    UMaterialInterface* MaterialRef;

public:
    virtual void BeginPlay() override;

    void SetMaterial(UMaterialInterface* NewMaterial);
    void SetDestructible(bool bDestructible);
    void SetBlockType(const FString& Type);
    void SetTipoBloque(ETipoBloque Tipo);

    bool IsDestructible() const { return bIsDestructible; }
    FString GetBlockType() const { return BlockType; }
    ETipoBloque GetTipoBloque() const { return TipoBloque; }

    virtual void ConfigurarBloque() {};
};