// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBase.h"

ABloqueBase::ABloqueBase()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    RootComponent = MeshComponent;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CubeMeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(CubeMeshAsset.Object);
        MeshComponent->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));
    }

    bIsDestructible = true;
    BlockType = TEXT("Default");
    TipoBloque = ETipoBloque::Vacio;
}

void ABloqueBase::BeginPlay()
{
    Super::BeginPlay();
    ConfigurarBloque();
}

void ABloqueBase::SetMaterial(UMaterialInterface* NewMaterial)
{
    if (MeshComponent && NewMaterial)
    {
        MeshComponent->SetMaterial(0, NewMaterial);
    }
}

void ABloqueBase::SetDestructible(bool bDestructible)
{
    bIsDestructible = bDestructible;
}

void ABloqueBase::SetBlockType(const FString& Type)
{
    BlockType = Type;
}

void ABloqueBase::SetTipoBloque(ETipoBloque Tipo)
{
    TipoBloque = Tipo;
}