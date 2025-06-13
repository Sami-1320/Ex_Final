// Fill out your copyright notice in the Description page of Project Settings.


#include "Niveles.h"
#include "LaberintoBuilder.h"
#include "Math/UnrealMathUtility.h"

ANiveles::ANiveles()
{
    PrimaryActorTick.bCanEverTick = false;
    CellSize = 200.f;
    MazeWidth = 20;
    MazeHeight = 20;
}

void ANiveles::BeginPlay()
{
    Super::BeginPlay();
}

void ANiveles::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ANiveles::Inicializar(int32 width, int32 height)
{
    MazeWidth = width;
    MazeHeight = height;
    CeldasLibres.Empty();

    for (int32 X = 1; X < width - 1; X++)
    {
        for (int32 Y = 1; Y < height - 1; Y++)
        {
            CeldasLibres.Add(FVector(X * CellSize, Y * CellSize, 0));
        }
    }
}

void ANiveles::CrearParedesExteriores(IILaberintoBuilder* Builder)
{
    if (!Builder || !LaberintoRef) return;

    FVector OffsetBase = LaberintoRef->GetLaberintoOffset();
    float CellHeight = GetCellSize();

    for (int32 X = 0; X < MazeWidth; X++)
    {
        Builder->AgregarPared(OffsetBase + FVector(X * CellSize, 0, CellHeight));
        Builder->AgregarPared(OffsetBase + FVector(X * CellSize, (MazeHeight - 1) * CellSize, CellHeight));
    }

    for (int32 Y = 0; Y < MazeHeight; Y++)
    {
        Builder->AgregarPared(OffsetBase + FVector(0, Y * CellSize, CellHeight));
        Builder->AgregarPared(OffsetBase + FVector((MazeWidth - 1) * CellSize, Y * CellSize, CellHeight));
    }
}

void ANiveles::CrearEstructuraLaberinto(IILaberintoBuilder* Builder)
{
    if (!Builder || !LaberintoRef) return;

    FVector OffsetBase = LaberintoRef->GetLaberintoOffset();
    float CellHeight = GetCellSize();

    for (int32 X = 1; X < MazeWidth - 1; X++)
    {
        for (int32 Y = 1; Y < MazeHeight - 1; Y++)
        {
            Builder->AgregarLaberinto(OffsetBase + FVector(X * CellSize, Y * CellSize, CellHeight));
        }
    }
}

void ANiveles::Laberinto(IILaberintoBuilder* Builder)
{
    // Método compatible con código existente
    CrearEstructuraLaberinto(Builder);
    CrearEspaciosLibres(Builder, 3);
}

void ANiveles::CrearEspaciosLibres(IILaberintoBuilder* Builder, int32 NumEspacios)
{
    if (!LaberintoRef) return;

    // Crear espacios libres aleatorios de 2x2
    for (int32 i = 0; i < NumEspacios; i++)
    {
        int32 RandomX = FMath::RandRange(2, MazeWidth - 3);
        int32 RandomY = FMath::RandRange(2, MazeHeight - 3);

        for (int32 dx = 0; dx < 2; dx++)
        {
            for (int32 dy = 0; dy < 2; dy++)
            {
                if (RandomX + dx < MazeWidth - 1 && RandomY + dy < MazeHeight - 1)
                {
                    LaberintoRef->SetTile(RandomX + dx, RandomY + dy, ETipoBloque::Vacio);
                }
            }
        }
    }
}

float ANiveles::GetCellSize() const
{
    return LaberintoRef ? LaberintoRef->GetBlockSize() : CellSize;
}
