// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueBase.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class EX_FINAL_API ABloqueConcreto : public ABloqueBase
{
	GENERATED_BODY()

public:
    ABloqueConcreto();
    virtual void ConfigurarBloque() override;

private:
    UPROPERTY()
    UMaterialInterface* ConcreteMaterial;
};