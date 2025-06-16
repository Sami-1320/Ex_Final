// CONCRETE BUILDER

#pragma once

#include "ILaberintoBuilder.h"
#include "BloqueBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaberintoBuilder.generated.h"

UCLASS()
class EX_FINAL_API ALaberintoBuilder : public AActor, public IILaberintoBuilder
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ALaberintoBuilder();

protected:
    virtual void BeginPlay() override;

    UPROPERTY()
    TArray<AActor*> Paredes;

    UPROPERTY()
    TArray<AActor*> BloquesPiso;

    UPROPERTY()
    TArray<AActor*> BloquesDestructibles;

    int32 MazeWidth;
    int32 MazeHeight;
    float BlockSize;
    FVector LaberintoOffset;

    TArray<TArray<int32>> TileMap;

public:
    virtual void Tick(float DeltaTime) override;

    // === IMPLEMENTACIÓN DE IILaberintoBuilder ===
    void AgregarPiso(int32 width, int32 height) override;
    void AgregarPared(const FVector& Pos) override;
    void AgregarLaberinto(const FVector& Pos) override;
    void SetDimensiones(int32 width, int32 height) override;
    void Reset() override;
    ALaberintoBuilder* GetResultado() override;

    // Métodos de acceso
    int32 GetWidth() const override { return MazeWidth; }
    int32 GetHeight() const override { return MazeHeight; }
    float GetBlockSize() const override { return BlockSize; }
    FVector GetOffset() const override { return LaberintoOffset; }

    // === MÉTODOS PÚBLICOS ADICIONALES ===
    void SetTile(int32 X, int32 Y, ETipoBloque Tipo);
    ETipoBloque GetTile(int32 X, int32 Y) const;
    FVector GetLaberintoOffset() const { return LaberintoOffset; }

private:
    void InicializarTileMap();
    ABloqueBase* CrearBloque(ETipoBloque TipoBloque, const FVector& Posicion);
    ETipoBloque SeleccionarTipoBloqueAleatorio();
    FVector TileToWorldPosition(int32 X, int32 Y) const;
    void LimpiarActores();
};