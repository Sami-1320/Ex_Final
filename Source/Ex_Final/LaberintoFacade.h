// FACADE PATTERN - Simplifica el uso de Builder y Composite

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DirectorBuilder.h"
#include "LaberintoBuilder.h"
#include "CompositeManagerLaberinto.h"
#include "LaberintoFacade.generated.h"

UENUM(BlueprintType)
enum class ETipoLaberinto : uint8
{
    Randomico = 0,  // Nivel 0 - Todos los tipos mezclados
    Concreto = 1,   // Nivel 1 - Solo bloques de concreto
    Ladrillo = 2,   // Nivel 2 - Solo bloques de ladrillo  
    Madera = 3,     // Nivel 3 - Solo bloques de madera
    Burbuja = 4     // Nivel 4 - Solo bloques de burbuja
};

UCLASS()
class EX_FINAL_API ALaberintoFacade : public AActor
{GENERATED_BODY()

public:
    ALaberintoFacade();

protected:
    virtual void BeginPlay() override;

    // Componentes internos (Builder, Composite y Niveles)
    UPROPERTY()
    ADirectorBuilder* Director;

    UPROPERTY()
    ALaberintoBuilder* LaberintoBuilder;

    UPROPERTY()
    ACompositeManagerLaberinto* CompositeManager;

    UPROPERTY()
    class ANiveles* Niveles;

    // Configuraciones
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laberinto Config")
    int32 AnchoLaberinto;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laberinto Config")
    int32 AltoLaberinto;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Laberinto Config")
    ETipoLaberinto NivelActual;

    // Estado del Facade
    bool bLaberintoCreado;
    bool bCompositeInicializado;
    int32 NumeroNivel;

public:
    virtual void Tick(float DeltaTime) override;

    // === MÉTODOS PRINCIPALES DEL FACADE ===

    UFUNCTION(BlueprintCallable, Category = "Laberinto Facade")
    void CrearLaberintoPorNivel(int32 Nivel, int32 Ancho = 20, int32 Alto = 20);

    UFUNCTION(BlueprintCallable, Category = "Laberinto Facade")
    void CrearLaberinto(int32 Ancho = 20, int32 Alto = 20, ETipoLaberinto TipoNivel = ETipoLaberinto::Randomico);

    UFUNCTION(BlueprintCallable, Category = "Laberinto Facade")
    void AvanzarAlSiguienteNivel();

    UFUNCTION(BlueprintCallable, Category = "Laberinto Facade")
    void ResetearNivelActual();

    UFUNCTION(BlueprintCallable, Category = "Laberinto Facade")
    void GestionarAnimaciones(bool bActivar);

    UFUNCTION(BlueprintCallable, Category = "Laberinto Facade")
    void InicializarSistemaCompleto();

    // === MÉTODOS DE INFORMACIÓN ===

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    bool IsLaberintoCreado() const { return bLaberintoCreado; }

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    bool IsCompositeActivo() const { return bCompositeInicializado; }

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    int32 GetNivelActual() const { return NumeroNivel; }

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    FString GetNombreNivel() const;

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    int32 GetCantidadBloquesDestructibles() const;

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    int32 GetCantidadBloquesIndestructibles() const;

    UFUNCTION(BlueprintCallable, Category = "Laberinto Info")
    FVector GetTamanoLaberinto() const;

    // === MÉTODOS DE UTILIDAD ===

    UFUNCTION(BlueprintCallable, Category = "Laberinto Utilidad")
    void CrearEspaciosLibres(int32 NumeroEspacios = 3);

    UFUNCTION(BlueprintCallable, Category = "Laberinto Utilidad")
    bool IsPosicionLibre(const FVector& Posicion) const;

    UFUNCTION(BlueprintCallable, Category = "Laberinto Utilidad")
    FVector GetPosicionAleatoriLibre() const;

    // === GETTERS ===
    ADirectorBuilder* GetDirector() const { return Director; }
    ALaberintoBuilder* GetLaberintoBuilder() const { return LaberintoBuilder; }
    ACompositeManagerLaberinto* GetCompositeManager() const { return CompositeManager; }
    ANiveles* GetNiveles() const { return Niveles; }

private:
    // Métodos internos que encapsulan complejidad
    void InicializarSubsistemaBuilder();
    void EjecutarConstruccionLaberinto(int32 Ancho, int32 Alto, ETipoLaberinto TipoNivel);
    void ConfigurarNivelEspecifico(ETipoLaberinto TipoNivel);
    void InicializarSubsistemaComposite();
    void InicializarSubsistemaNiveles();
    void LimpiarTodosLosSubsistemas();

    // Utilidades
    ETipoBloque ConvertirTipoLaberintoATipoBloque(ETipoLaberinto TipoNivel);
    bool ValidarEstadoSubsistemas() const;
    bool ValidarDimensiones(int32 Ancho, int32 Alto) const;
};