// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class EX_FINAL_API ABloqueLadrillo : public ABloqueBase
{
	GENERATED_BODY()

public:
    ABloqueLadrillo();
    virtual void ConfigurarBloque() override;

private:
    UPROPERTY()
    UMaterialInterface* BrickMaterial;
};