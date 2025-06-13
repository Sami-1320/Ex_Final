// DIRECTOR

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "DirectorBuilder.generated.h"

// Forward declaration para evitar dependencia circular
class ALaberintoBuilder;

UCLASS()
class EX_FINAL_API ADirectorBuilder : public AActor
{
    GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorBuilder();

protected:
    virtual void BeginPlay() override;

    // CORREGIDO: Usar TScriptInterface para interfaces en Unreal Engine
    UPROPERTY()
    TScriptInterface<IILaberintoBuilder> Builder;

public:
    virtual void Tick(float DeltaTime) override;

    // === MÉTODOS DEL DIRECTOR (PATRÓN BUILDER PURO) ===
    void SetBuilder(AActor* BuilderActor);
    void SetBuilder(IILaberintoBuilder* NewBuilder);
    void CrearLaberintoCompleto(int32 width, int32 height);
    void CrearLaberintoAleatorio(int32 width, int32 height); // Método compatible
    ALaberintoBuilder* GetLaberintoCompleto();

private:
    void ConstruirPiso(int32 width, int32 height);
    void ConstruirParedesExteriores(int32 width, int32 height);
    void ConstruirEstructuraInterna(int32 width, int32 height);
};