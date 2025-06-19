// PLAYER CONTROLLER MODIFICADO PARA MANEJAR NIVELES DEL FACADE

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CompositeManagerLaberinto.h"
#include "LaberintoFacade.h"
#include "BloqueBase.h"
#include "MyPlayerController.generated.h"

UCLASS()
class EX_FINAL_API AMyPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AMyPlayerController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

private:
    // Referencias a sistemas
    UPROPERTY()
    ACompositeManagerLaberinto* CompositeManager;

    UPROPERTY()
    ALaberintoFacade* LaberintoFacade;

    // Métodos de input
    void OnLeftClick();
    void OnRightClick();
    void OnStartCompositeMovement();
    void OnNivel0_Randomico();
    void OnNivel1_Concreto();
    void OnNivel2_Ladrillo();
    void OnNivel3_Madera();
    void OnNivel4_Burbuja();

    // Métodos de utilidad
    void BuscarCompositeManager();
    void BuscarLaberintoFacade();
    ABloqueBase* GetBlockUnderCursor();
    void DestroyBlock(ABloqueBase* Block);
    void ShowBlockInfo(ABloqueBase* Block);
    void CrearNivelConFacade(int32 NumeroNivel);
    void MostrarInfoNivel();
};