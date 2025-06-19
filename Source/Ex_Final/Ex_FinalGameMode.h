
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LaberintoFacade.h" 
#include "MyPlayerController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Ex_FinalGameMode.generated.h"

UCLASS(minimalapi)
class AEx_FinalGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AEx_FinalGameMode();

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    ALaberintoFacade* LaberintoFacade;

    // Referencia al PlayerController generado
    UPROPERTY()
    APlayerController* PlayerController;

    // === MÉTODOS SIMPLIFICADOS CON FACADE ===
    void CreateMaze();                                                      

};