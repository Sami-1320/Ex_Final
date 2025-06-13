// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"

ABloqueMadera::ABloqueMadera()
{
    SetBlockType(TEXT("Madera"));
    SetTipoBloque(ETipoBloque::Madera);
    SetDestructible(true);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> WoodMaterialFinder(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
    if (WoodMaterialFinder.Succeeded())
    {
        WoodMaterial = WoodMaterialFinder.Object;
    }
}

void ABloqueMadera::ConfigurarBloque()
{
    if (WoodMaterial)
    {
        SetMaterial(WoodMaterial);
    }
}