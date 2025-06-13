// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"

ABloqueAcero::ABloqueAcero()
{
    SetBlockType(TEXT("Acero"));
    SetTipoBloque(ETipoBloque::Acero);
    SetDestructible(false);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> SteelMaterialFinder(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (SteelMaterialFinder.Succeeded())
    {
        SteelMaterial = SteelMaterialFinder.Object;
    }
}

void ABloqueAcero::ConfigurarBloque()
{
    if (SteelMaterial)
    {
        SetMaterial(SteelMaterial);
    }
}

