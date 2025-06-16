// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CompositeManagerLaberinto.h"
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
    // Referencia al CompositeManager
    UPROPERTY()
    ACompositeManagerLaberinto* CompositeManager;

    // M�todos de input
    void OnLeftClick();
    void OnRightClick();
    void OnStartCompositeMovement(); // Declaraci�n del m�todo para la tecla Y

    // M�todos de interacci�n
    void BuscarCompositeManager();
    ABloqueBase* GetBlockUnderCursor();
    void DestroyBlock(ABloqueBase* Block);
    void ShowBlockInfo(ABloqueBase* Block);
};