// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// CLIENTE 

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BloqueBase.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
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
    void OnLeftClick();
    void OnRightClick();
    void DestroyBlock(ABloqueBase* Block);
    void ShowBlockInfo(ABloqueBase* Block);
    ABloqueBase* GetBlockUnderCursor();
};
