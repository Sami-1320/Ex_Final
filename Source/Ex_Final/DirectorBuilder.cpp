#include "DirectorBuilder.h"
#include "LaberintoBuilder.h"

ADirectorBuilder::ADirectorBuilder()
{
    PrimaryActorTick.bCanEverTick = false;
    // Builder se inicializa automáticamente como nullptr
}

void ADirectorBuilder::BeginPlay()
{
    Super::BeginPlay();
}

void ADirectorBuilder::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADirectorBuilder::SetBuilder(AActor* BuilderActor)
{
    if (BuilderActor)
    {
        ALaberintoBuilder* LaberintoBuilder = Cast<ALaberintoBuilder>(BuilderActor);
        if (LaberintoBuilder)
        {
            Builder.SetObject(LaberintoBuilder);
            Builder.SetInterface(Cast<IILaberintoBuilder>(LaberintoBuilder));
        }
    }
}

void ADirectorBuilder::SetBuilder(IILaberintoBuilder* NewBuilder)
{
    if (NewBuilder)
    {
        // Obtener el objeto que implementa la interfaz
        UObject* BuilderObject = Cast<UObject>(NewBuilder);
        if (BuilderObject)
        {
            Builder.SetObject(BuilderObject);
            Builder.SetInterface(NewBuilder);
        }
    }
}

void ADirectorBuilder::CrearLaberintoCompleto(int32 width, int32 height)
{
    // Obtener la interfaz del TScriptInterface
    IILaberintoBuilder* LaberintoInterface = Builder.GetInterface();

    if (!LaberintoInterface)
    {
        return;
    }

    // Reset del builder
    LaberintoInterface->Reset();

    // Secuencia de construcción del Director
    ConstruirPiso(width, height);
    ConstruirParedesExteriores(width, height);
    ConstruirEstructuraInterna(width, height);
}

void ADirectorBuilder::CrearLaberintoAleatorio(int32 width, int32 height)
{
    // Método compatible con código existente
    CrearLaberintoCompleto(width, height);
}

ALaberintoBuilder* ADirectorBuilder::GetLaberintoCompleto()
{
    IILaberintoBuilder* LaberintoInterface = Builder.GetInterface();
    return LaberintoInterface ? LaberintoInterface->GetResultado() : nullptr;
}

// === MÉTODOS PRIVADOS DE CONSTRUCCIÓN ===

void ADirectorBuilder::ConstruirPiso(int32 width, int32 height)
{
    IILaberintoBuilder* LaberintoInterface = Builder.GetInterface();
    if (LaberintoInterface)
    {
        LaberintoInterface->AgregarPiso(width, height);
    }
}

void ADirectorBuilder::ConstruirParedesExteriores(int32 width, int32 height)
{
    IILaberintoBuilder* LaberintoInterface = Builder.GetInterface();
    if (!LaberintoInterface) return;

    ALaberintoBuilder* LaberintoBuilder = LaberintoInterface->GetResultado();
    if (!LaberintoBuilder) return;

    FVector Offset = LaberintoBuilder->GetOffset();
    float CellSize = LaberintoBuilder->GetBlockSize();

    // Paredes horizontales (superior e inferior)
    for (int32 X = 0; X < width; X++)
    {
        // Pared superior
        FVector PosTop = Offset + FVector(X * CellSize, 0, CellSize);
        LaberintoInterface->AgregarPared(PosTop);

        // Pared inferior
        FVector PosBottom = Offset + FVector(X * CellSize, (height - 1) * CellSize, CellSize);
        LaberintoInterface->AgregarPared(PosBottom);
    }

    // Paredes verticales (izquierda y derecha)
    for (int32 Y = 1; Y < height - 1; Y++)
    {
        // Pared izquierda
        FVector PosLeft = Offset + FVector(0, Y * CellSize, CellSize);
        LaberintoInterface->AgregarPared(PosLeft);

        // Pared derecha
        FVector PosRight = Offset + FVector((width - 1) * CellSize, Y * CellSize, CellSize);
        LaberintoInterface->AgregarPared(PosRight);
    }
}

void ADirectorBuilder::ConstruirEstructuraInterna(int32 width, int32 height)
{
    IILaberintoBuilder* LaberintoInterface = Builder.GetInterface();
    if (!LaberintoInterface) return;

    ALaberintoBuilder* LaberintoBuilder = LaberintoInterface->GetResultado();
    if (!LaberintoBuilder) return;

    FVector Offset = LaberintoBuilder->GetOffset();
    float CellSize = LaberintoBuilder->GetBlockSize();

    // Crear estructura interna
    for (int32 X = 1; X < width - 1; X++)
    {
        for (int32 Y = 1; Y < height - 1; Y++)
        {
            FVector Pos = Offset + FVector(X * CellSize, Y * CellSize, CellSize);
            LaberintoInterface->AgregarLaberinto(Pos);
        }
    }
}