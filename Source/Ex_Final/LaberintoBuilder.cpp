// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoBuilder.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueBurbuja.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"

ALaberintoBuilder::ALaberintoBuilder()
{
    PrimaryActorTick.bCanEverTick = false;
    MazeWidth = 20;
    MazeHeight = 20;
    BlockSize = 200.0f;
    LaberintoOffset = FVector(100.0f, 100.0f, 0.0f);
}

void ALaberintoBuilder::BeginPlay()
{
    Super::BeginPlay();
    InicializarTileMap();
}

void ALaberintoBuilder::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// === IMPLEMENTACIÓN DEL BUILDER ===

void ALaberintoBuilder::SetDimensiones(int32 width, int32 height)
{
    MazeWidth = width;
    MazeHeight = height;
}

void ALaberintoBuilder::Reset()
{
    LimpiarActores();
    Paredes.Empty();
    BloquesPiso.Empty();
    BloquesDestructibles.Empty();
    TileMap.Empty();
}

ALaberintoBuilder* ALaberintoBuilder::GetResultado()
{
    return this;
}

void ALaberintoBuilder::AgregarPiso(int32 width, int32 height)
{
    SetDimensiones(width, height);
    InicializarTileMap();

    for (int32 X = 0; X < MazeWidth; X++)
    {
        for (int32 Y = 0; Y < MazeHeight; Y++)
        {
            FVector PosicionPiso = TileToWorldPosition(X, Y);
            PosicionPiso.Z = 0.0f;
            ABloqueBase* BloquePiso = CrearBloque(ETipoBloque::Acero, PosicionPiso);
            if (BloquePiso)
            {
                BloquesPiso.Add(BloquePiso);
                SetTile(X, Y, ETipoBloque::Acero);
            }
        }
    }
}

void ALaberintoBuilder::AgregarPared(const FVector& Pos)
{
    FVector RelativePos = Pos - LaberintoOffset;
    int32 TileX = FMath::RoundToInt(RelativePos.X / BlockSize);
    int32 TileY = FMath::RoundToInt(RelativePos.Y / BlockSize);

    if (TileX >= 0 && TileX < MazeWidth && TileY >= 0 && TileY < MazeHeight)
    {
        SetTile(TileX, TileY, ETipoBloque::Acero);
        ABloqueBase* Pared = CrearBloque(ETipoBloque::Acero, Pos);
        if (Pared)
        {
            Pared->SetDestructible(false);
            Paredes.Add(Pared);
        }
    }
}

void ALaberintoBuilder::AgregarLaberinto(const FVector& Pos)
{
    FVector RelativePos = Pos - LaberintoOffset;
    int32 TileX = FMath::RoundToInt(RelativePos.X / BlockSize);
    int32 TileY = FMath::RoundToInt(RelativePos.Y / BlockSize);

    if (TileX >= 0 && TileX < MazeWidth && TileY >= 0 && TileY < MazeHeight)
    {
        int32 RandomValue = FMath::RandRange(1, 100);
        ETipoBloque TipoBloque = ETipoBloque::Vacio;
        if (RandomValue > 50)
        {
            TipoBloque = SeleccionarTipoBloqueAleatorio();
        }
        SetTile(TileX, TileY, TipoBloque);

        if (TipoBloque != ETipoBloque::Vacio)
        {
            ABloqueBase* Bloque = CrearBloque(TipoBloque, Pos);
            if (Bloque)
            {
                Bloque->SetDestructible(true);
                BloquesDestructibles.Add(Bloque);
            }
        }
    }
}

// === MÉTODOS AUXILIARES ===

void ALaberintoBuilder::InicializarTileMap()
{
    TileMap.SetNum(MazeWidth);
    for (int32 X = 0; X < MazeWidth; X++)
    {
        TileMap[X].SetNum(MazeHeight);
        for (int32 Y = 0; Y < MazeHeight; Y++)
        {
            TileMap[X][Y] = (int32)ETipoBloque::Vacio;
        }
    }
}

void ALaberintoBuilder::SetTile(int32 X, int32 Y, ETipoBloque Tipo)
{
    if (X >= 0 && X < MazeWidth && Y >= 0 && Y < MazeHeight)
    {
        TileMap[X][Y] = (int32)Tipo;
    }
}

ETipoBloque ALaberintoBuilder::GetTile(int32 X, int32 Y) const
{
    if (X >= 0 && X < MazeWidth && Y >= 0 && Y < MazeHeight)
    {
        return (ETipoBloque)TileMap[X][Y];
    }
    return ETipoBloque::Vacio;
}

FVector ALaberintoBuilder::TileToWorldPosition(int32 X, int32 Y) const
{
    return LaberintoOffset + FVector(X * BlockSize, Y * BlockSize, 0.0f);
}

void ALaberintoBuilder::LimpiarActores()
{
    for (AActor* Actor : Paredes)
    {
        if (IsValid(Actor))
        {
            Actor->Destroy();
        }
    }

    for (AActor* Actor : BloquesPiso)
    {
        if (IsValid(Actor))
        {
            Actor->Destroy();
        }
    }

    for (AActor* Actor : BloquesDestructibles)
    {
        if (IsValid(Actor))
        {
            Actor->Destroy();
        }
    }
}

ABloqueBase* ALaberintoBuilder::CrearBloque(ETipoBloque TipoBloque, const FVector& Posicion)
{
    if (!GetWorld()) return nullptr;

    ABloqueBase* NuevoBloque = nullptr;
    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;

    switch (TipoBloque)
    {
    case ETipoBloque::Acero:
        NuevoBloque = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
        break;
    case ETipoBloque::Madera:
        NuevoBloque = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
        break;
    case ETipoBloque::Ladrillo:
        NuevoBloque = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
        break;
    case ETipoBloque::Concreto:
        NuevoBloque = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
        break;
    case ETipoBloque::Burbuja:
        NuevoBloque = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), Posicion, FRotator::ZeroRotator, SpawnParams);
        break;
    case ETipoBloque::Vacio:
    default:
        return nullptr;
    }

    if (!NuevoBloque)
    {
        //
    }
    return NuevoBloque;
}

ETipoBloque ALaberintoBuilder::SeleccionarTipoBloqueAleatorio()
{
    TArray<ETipoBloque> TiposDestructibles = {
        ETipoBloque::Madera,
        ETipoBloque::Ladrillo,
        ETipoBloque::Concreto,
        ETipoBloque::Burbuja
    };
    int32 IndiceAleatorio = FMath::RandRange(0, TiposDestructibles.Num() - 1);
    return TiposDestructibles[IndiceAleatorio];
}
