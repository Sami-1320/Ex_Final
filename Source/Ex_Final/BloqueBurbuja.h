// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueBurbuja.generated.h"

/**
 * 
 */
UCLASS()
class EX_FINAL_API ABloqueBurbuja : public ABloqueBase
{
	GENERATED_BODY()
	
public:
    ABloqueBurbuja();
    virtual void ConfigurarBloque() override;

private:
    UPROPERTY()
    UMaterialInterface* BubbleMaterial;
};
