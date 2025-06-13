// HELPER

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Niveles.generated.h"

UCLASS()
class EX_FINAL_API ANiveles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANiveles();

protected:
    virtual void BeginPlay() override;

    int32 MazeWidth;
    int32 MazeHeight;
    float CellSize = 200.f;
    TArray<FVector> CeldasLibres;

private:
    UPROPERTY()
    class ALaberintoBuilder* LaberintoRef;

public:
    virtual void Tick(float DeltaTime) override;

    // === MÉTODOS BÁSICOS ===
    void Inicializar(int32 width, int32 height);
    void CrearParedesExteriores(IILaberintoBuilder* Builder);
    void CrearEstructuraLaberinto(IILaberintoBuilder* Builder);
    void CrearEspaciosLibres(IILaberintoBuilder* Builder, int32 NumEspacios = 3);

    // === GETTERS Y SETTERS ===
    void SetLaberintoRef(ALaberintoBuilder* Laberinto) { LaberintoRef = Laberinto; }
    ALaberintoBuilder* GetLaberinto() const { return LaberintoRef; }
    float GetCellSize() const;

    // === MÉTODOS COMPATIBLES CON CÓDIGO EXISTENTE ===
    void Laberinto(IILaberintoBuilder* Builder);
};