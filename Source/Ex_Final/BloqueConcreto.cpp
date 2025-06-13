// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueConcreto.h"

ABloqueConcreto::ABloqueConcreto()
{
    SetBlockType(TEXT("Concreto"));
    SetTipoBloque(ETipoBloque::Concreto);
    SetDestructible(true);

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> ConcreteMaterialFinder(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles'"));
    if (ConcreteMaterialFinder.Succeeded())
    {
        ConcreteMaterial = ConcreteMaterialFinder.Object;
    }
}

void ABloqueConcreto::ConfigurarBloque()
{
    if (ConcreteMaterial)
    {
        SetMaterial(ConcreteMaterial);
    }
}