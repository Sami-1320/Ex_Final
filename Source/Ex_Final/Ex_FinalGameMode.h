// ORQUESTADOR

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DirectorBuilder.h"
#include "LaberintoBuilder.h"
#include "CompositeManagerLaberinto.h"
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
    // Builder Pattern
    UPROPERTY()
    ADirectorBuilder* Director;

    UPROPERTY()
    ALaberintoBuilder* LaberintoBuilder;

    // Composite Pattern
    UPROPERTY()
    ACompositeManagerLaberinto* CompositeManager;

    // Referencia al PlayerController generado
    UPROPERTY()
    APlayerController* PlayerController;

    void CreateMaze();
    void CreateNewMaze(int32 Width = 20, int32 Height = 20);
    void InicializarComposite();
};