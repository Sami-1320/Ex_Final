// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueMadera.generated.h"

/**
 * 
 */
UCLASS()
class EX_FINAL_API ABloqueMadera : public ABloqueBase
{
	GENERATED_BODY()

public:
    ABloqueMadera();
    virtual void ConfigurarBloque() override;

private:
    UPROPERTY()
    UMaterialInterface* WoodMaterial;
};