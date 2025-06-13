// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrillo.h"

ABloqueLadrillo::ABloqueLadrillo()
{
    SetBlockType(TEXT("Ladrillo"));
    SetTipoBloque(ETipoBloque::Ladrillo);
    SetDestructible(true);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> BrickMaterialFinder(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
    if (BrickMaterialFinder.Succeeded())
    {
        BrickMaterial = BrickMaterialFinder.Object;
    }
}

void ABloqueLadrillo::ConfigurarBloque()
{
    if (BrickMaterial)
    {
        SetMaterial(BrickMaterial);
    }
}