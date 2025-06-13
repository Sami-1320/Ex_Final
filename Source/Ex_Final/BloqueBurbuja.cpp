// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBurbuja.h"

ABloqueBurbuja::ABloqueBurbuja()
{
    SetBlockType(TEXT("Burbuja"));
    SetTipoBloque(ETipoBloque::Burbuja);
    SetDestructible(true);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> BubbleMaterialFinder(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));
    if (BubbleMaterialFinder.Succeeded())
    {
        BubbleMaterial = BubbleMaterialFinder.Object;
    }
}

void ABloqueBurbuja::ConfigurarBloque()
{
    if (BubbleMaterial)
    {
        SetMaterial(BubbleMaterial);
    }
}