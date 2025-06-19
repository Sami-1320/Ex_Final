// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/LaberintoFacade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoFacade() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
EX_FINAL_API UClass* Z_Construct_UClass_ACompositeManagerLaberinto_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoFacade();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoFacade_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ANiveles_NoRegister();
EX_FINAL_API UEnum* Z_Construct_UEnum_Ex_Final_ETipoLaberinto();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Enum ETipoLaberinto
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoLaberinto;
static UEnum* ETipoLaberinto_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoLaberinto.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoLaberinto.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Ex_Final_ETipoLaberinto, (UObject*)Z_Construct_UPackage__Script_Ex_Final(), TEXT("ETipoLaberinto"));
	}
	return Z_Registration_Info_UEnum_ETipoLaberinto.OuterSingleton;
}
template<> EX_FINAL_API UEnum* StaticEnum<ETipoLaberinto>()
{
	return ETipoLaberinto_StaticEnum();
}
struct Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Burbuja.Comment", "// Nivel 3 - Solo bloques de madera\n" },
		{ "Burbuja.Name", "ETipoLaberinto::Burbuja" },
		{ "Burbuja.ToolTip", "Nivel 3 - Solo bloques de madera" },
		{ "Concreto.Comment", "// Nivel 0 - Todos los tipos mezclados\n" },
		{ "Concreto.Name", "ETipoLaberinto::Concreto" },
		{ "Concreto.ToolTip", "Nivel 0 - Todos los tipos mezclados" },
		{ "Ladrillo.Comment", "// Nivel 1 - Solo bloques de concreto\n" },
		{ "Ladrillo.Name", "ETipoLaberinto::Ladrillo" },
		{ "Ladrillo.ToolTip", "Nivel 1 - Solo bloques de concreto" },
		{ "Madera.Comment", "// Nivel 2 - Solo bloques de ladrillo  \n" },
		{ "Madera.Name", "ETipoLaberinto::Madera" },
		{ "Madera.ToolTip", "Nivel 2 - Solo bloques de ladrillo" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
		{ "Randomico.Name", "ETipoLaberinto::Randomico" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoLaberinto::Randomico", (int64)ETipoLaberinto::Randomico },
		{ "ETipoLaberinto::Concreto", (int64)ETipoLaberinto::Concreto },
		{ "ETipoLaberinto::Ladrillo", (int64)ETipoLaberinto::Ladrillo },
		{ "ETipoLaberinto::Madera", (int64)ETipoLaberinto::Madera },
		{ "ETipoLaberinto::Burbuja", (int64)ETipoLaberinto::Burbuja },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Ex_Final,
	nullptr,
	"ETipoLaberinto",
	"ETipoLaberinto",
	Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Ex_Final_ETipoLaberinto()
{
	if (!Z_Registration_Info_UEnum_ETipoLaberinto.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoLaberinto.InnerSingleton, Z_Construct_UEnum_Ex_Final_ETipoLaberinto_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoLaberinto.InnerSingleton;
}
// End Enum ETipoLaberinto

// Begin Class ALaberintoFacade Function AvanzarAlSiguienteNivel
struct Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Facade" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "AvanzarAlSiguienteNivel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execAvanzarAlSiguienteNivel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AvanzarAlSiguienteNivel();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function AvanzarAlSiguienteNivel

// Begin Class ALaberintoFacade Function CrearEspaciosLibres
struct Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics
{
	struct LaberintoFacade_eventCrearEspaciosLibres_Parms
	{
		int32 NumeroEspacios;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Utilidad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === M\xef\xbf\xbdTODOS DE UTILIDAD ===\n" },
#endif
		{ "CPP_Default_NumeroEspacios", "3" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== M\xef\xbf\xbdTODOS DE UTILIDAD ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumeroEspacios;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::NewProp_NumeroEspacios = { "NumeroEspacios", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearEspaciosLibres_Parms, NumeroEspacios), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::NewProp_NumeroEspacios,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "CrearEspaciosLibres", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::LaberintoFacade_eventCrearEspaciosLibres_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::LaberintoFacade_eventCrearEspaciosLibres_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execCrearEspaciosLibres)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumeroEspacios);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearEspaciosLibres(Z_Param_NumeroEspacios);
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function CrearEspaciosLibres

// Begin Class ALaberintoFacade Function CrearLaberinto
struct Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics
{
	struct LaberintoFacade_eventCrearLaberinto_Parms
	{
		int32 Ancho;
		int32 Alto;
		ETipoLaberinto TipoNivel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Facade" },
		{ "CPP_Default_Alto", "20" },
		{ "CPP_Default_Ancho", "20" },
		{ "CPP_Default_TipoNivel", "Randomico" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ancho;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alto;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TipoNivel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoNivel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_Ancho = { "Ancho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearLaberinto_Parms, Ancho), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_Alto = { "Alto", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearLaberinto_Parms, Alto), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_TipoNivel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_TipoNivel = { "TipoNivel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearLaberinto_Parms, TipoNivel), Z_Construct_UEnum_Ex_Final_ETipoLaberinto, METADATA_PARAMS(0, nullptr) }; // 2687121364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_Ancho,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_Alto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_TipoNivel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::NewProp_TipoNivel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "CrearLaberinto", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::LaberintoFacade_eventCrearLaberinto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::LaberintoFacade_eventCrearLaberinto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execCrearLaberinto)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Ancho);
	P_GET_PROPERTY(FIntProperty,Z_Param_Alto);
	P_GET_ENUM(ETipoLaberinto,Z_Param_TipoNivel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearLaberinto(Z_Param_Ancho,Z_Param_Alto,ETipoLaberinto(Z_Param_TipoNivel));
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function CrearLaberinto

// Begin Class ALaberintoFacade Function CrearLaberintoPorNivel
struct Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics
{
	struct LaberintoFacade_eventCrearLaberintoPorNivel_Parms
	{
		int32 Nivel;
		int32 Ancho;
		int32 Alto;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Facade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === M\xef\xbf\xbdTODOS PRINCIPALES DEL FACADE ===\n" },
#endif
		{ "CPP_Default_Alto", "20" },
		{ "CPP_Default_Ancho", "20" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== M\xef\xbf\xbdTODOS PRINCIPALES DEL FACADE ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Nivel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ancho;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alto;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::NewProp_Nivel = { "Nivel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearLaberintoPorNivel_Parms, Nivel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::NewProp_Ancho = { "Ancho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearLaberintoPorNivel_Parms, Ancho), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::NewProp_Alto = { "Alto", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventCrearLaberintoPorNivel_Parms, Alto), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::NewProp_Nivel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::NewProp_Ancho,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::NewProp_Alto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "CrearLaberintoPorNivel", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::LaberintoFacade_eventCrearLaberintoPorNivel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::LaberintoFacade_eventCrearLaberintoPorNivel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execCrearLaberintoPorNivel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Nivel);
	P_GET_PROPERTY(FIntProperty,Z_Param_Ancho);
	P_GET_PROPERTY(FIntProperty,Z_Param_Alto);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearLaberintoPorNivel(Z_Param_Nivel,Z_Param_Ancho,Z_Param_Alto);
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function CrearLaberintoPorNivel

// Begin Class ALaberintoFacade Function GestionarAnimaciones
struct Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics
{
	struct LaberintoFacade_eventGestionarAnimaciones_Parms
	{
		bool bActivar;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Facade" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bActivar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::NewProp_bActivar_SetBit(void* Obj)
{
	((LaberintoFacade_eventGestionarAnimaciones_Parms*)Obj)->bActivar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::NewProp_bActivar = { "bActivar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LaberintoFacade_eventGestionarAnimaciones_Parms), &Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::NewProp_bActivar_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::NewProp_bActivar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GestionarAnimaciones", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::LaberintoFacade_eventGestionarAnimaciones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::LaberintoFacade_eventGestionarAnimaciones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGestionarAnimaciones)
{
	P_GET_UBOOL(Z_Param_bActivar);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GestionarAnimaciones(Z_Param_bActivar);
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GestionarAnimaciones

// Begin Class ALaberintoFacade Function GetCantidadBloquesDestructibles
struct Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics
{
	struct LaberintoFacade_eventGetCantidadBloquesDestructibles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventGetCantidadBloquesDestructibles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GetCantidadBloquesDestructibles", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::LaberintoFacade_eventGetCantidadBloquesDestructibles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::LaberintoFacade_eventGetCantidadBloquesDestructibles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGetCantidadBloquesDestructibles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCantidadBloquesDestructibles();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GetCantidadBloquesDestructibles

// Begin Class ALaberintoFacade Function GetCantidadBloquesIndestructibles
struct Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics
{
	struct LaberintoFacade_eventGetCantidadBloquesIndestructibles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventGetCantidadBloquesIndestructibles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GetCantidadBloquesIndestructibles", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::LaberintoFacade_eventGetCantidadBloquesIndestructibles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::LaberintoFacade_eventGetCantidadBloquesIndestructibles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGetCantidadBloquesIndestructibles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCantidadBloquesIndestructibles();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GetCantidadBloquesIndestructibles

// Begin Class ALaberintoFacade Function GetNivelActual
struct Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics
{
	struct LaberintoFacade_eventGetNivelActual_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventGetNivelActual_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GetNivelActual", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::LaberintoFacade_eventGetNivelActual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::LaberintoFacade_eventGetNivelActual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GetNivelActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GetNivelActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGetNivelActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNivelActual();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GetNivelActual

// Begin Class ALaberintoFacade Function GetNombreNivel
struct Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics
{
	struct LaberintoFacade_eventGetNombreNivel_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventGetNombreNivel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GetNombreNivel", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::LaberintoFacade_eventGetNombreNivel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::LaberintoFacade_eventGetNombreNivel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGetNombreNivel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNombreNivel();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GetNombreNivel

// Begin Class ALaberintoFacade Function GetPosicionAleatoriLibre
struct Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics
{
	struct LaberintoFacade_eventGetPosicionAleatoriLibre_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Utilidad" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventGetPosicionAleatoriLibre_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GetPosicionAleatoriLibre", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::LaberintoFacade_eventGetPosicionAleatoriLibre_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::LaberintoFacade_eventGetPosicionAleatoriLibre_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGetPosicionAleatoriLibre)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPosicionAleatoriLibre();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GetPosicionAleatoriLibre

// Begin Class ALaberintoFacade Function GetTamanoLaberinto
struct Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics
{
	struct LaberintoFacade_eventGetTamanoLaberinto_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventGetTamanoLaberinto_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "GetTamanoLaberinto", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::LaberintoFacade_eventGetTamanoLaberinto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::LaberintoFacade_eventGetTamanoLaberinto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execGetTamanoLaberinto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTamanoLaberinto();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function GetTamanoLaberinto

// Begin Class ALaberintoFacade Function InicializarSistemaCompleto
struct Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Facade" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "InicializarSistemaCompleto", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execInicializarSistemaCompleto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InicializarSistemaCompleto();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function InicializarSistemaCompleto

// Begin Class ALaberintoFacade Function IsCompositeActivo
struct Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics
{
	struct LaberintoFacade_eventIsCompositeActivo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LaberintoFacade_eventIsCompositeActivo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LaberintoFacade_eventIsCompositeActivo_Parms), &Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "IsCompositeActivo", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::LaberintoFacade_eventIsCompositeActivo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::LaberintoFacade_eventIsCompositeActivo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execIsCompositeActivo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompositeActivo();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function IsCompositeActivo

// Begin Class ALaberintoFacade Function IsLaberintoCreado
struct Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics
{
	struct LaberintoFacade_eventIsLaberintoCreado_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === M\xef\xbf\xbdTODOS DE INFORMACI\xef\xbf\xbdN ===\n" },
#endif
		{ "ModuleRelativePath", "LaberintoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== M\xef\xbf\xbdTODOS DE INFORMACI\xef\xbf\xbdN ===" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LaberintoFacade_eventIsLaberintoCreado_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LaberintoFacade_eventIsLaberintoCreado_Parms), &Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "IsLaberintoCreado", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::LaberintoFacade_eventIsLaberintoCreado_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::LaberintoFacade_eventIsLaberintoCreado_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execIsLaberintoCreado)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLaberintoCreado();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function IsLaberintoCreado

// Begin Class ALaberintoFacade Function IsPosicionLibre
struct Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics
{
	struct LaberintoFacade_eventIsPosicionLibre_Parms
	{
		FVector Posicion;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Utilidad" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Posicion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoFacade_eventIsPosicionLibre_Parms, Posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Posicion_MetaData), NewProp_Posicion_MetaData) };
void Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LaberintoFacade_eventIsPosicionLibre_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LaberintoFacade_eventIsPosicionLibre_Parms), &Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "IsPosicionLibre", nullptr, nullptr, Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::LaberintoFacade_eventIsPosicionLibre_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::LaberintoFacade_eventIsPosicionLibre_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execIsPosicionLibre)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPosicionLibre(Z_Param_Out_Posicion);
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function IsPosicionLibre

// Begin Class ALaberintoFacade Function ResetearNivelActual
struct Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Facade" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoFacade, nullptr, "ResetearNivelActual", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoFacade::execResetearNivelActual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetearNivelActual();
	P_NATIVE_END;
}
// End Class ALaberintoFacade Function ResetearNivelActual

// Begin Class ALaberintoFacade
void ALaberintoFacade::StaticRegisterNativesALaberintoFacade()
{
	UClass* Class = ALaberintoFacade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AvanzarAlSiguienteNivel", &ALaberintoFacade::execAvanzarAlSiguienteNivel },
		{ "CrearEspaciosLibres", &ALaberintoFacade::execCrearEspaciosLibres },
		{ "CrearLaberinto", &ALaberintoFacade::execCrearLaberinto },
		{ "CrearLaberintoPorNivel", &ALaberintoFacade::execCrearLaberintoPorNivel },
		{ "GestionarAnimaciones", &ALaberintoFacade::execGestionarAnimaciones },
		{ "GetCantidadBloquesDestructibles", &ALaberintoFacade::execGetCantidadBloquesDestructibles },
		{ "GetCantidadBloquesIndestructibles", &ALaberintoFacade::execGetCantidadBloquesIndestructibles },
		{ "GetNivelActual", &ALaberintoFacade::execGetNivelActual },
		{ "GetNombreNivel", &ALaberintoFacade::execGetNombreNivel },
		{ "GetPosicionAleatoriLibre", &ALaberintoFacade::execGetPosicionAleatoriLibre },
		{ "GetTamanoLaberinto", &ALaberintoFacade::execGetTamanoLaberinto },
		{ "InicializarSistemaCompleto", &ALaberintoFacade::execInicializarSistemaCompleto },
		{ "IsCompositeActivo", &ALaberintoFacade::execIsCompositeActivo },
		{ "IsLaberintoCreado", &ALaberintoFacade::execIsLaberintoCreado },
		{ "IsPosicionLibre", &ALaberintoFacade::execIsPosicionLibre },
		{ "ResetearNivelActual", &ALaberintoFacade::execResetearNivelActual },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoFacade);
UClass* Z_Construct_UClass_ALaberintoFacade_NoRegister()
{
	return ALaberintoFacade::StaticClass();
}
struct Z_Construct_UClass_ALaberintoFacade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoFacade.h" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Director_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componentes internos (Builder, Composite y Niveles)\n" },
#endif
		{ "ModuleRelativePath", "LaberintoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componentes internos (Builder, Composite y Niveles)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoBuilder_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeManager_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niveles_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchoLaberinto_MetaData[] = {
		{ "Category", "Laberinto Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuraciones\n" },
#endif
		{ "ModuleRelativePath", "LaberintoFacade.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuraciones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AltoLaberinto_MetaData[] = {
		{ "Category", "Laberinto Config" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NivelActual_MetaData[] = {
		{ "Category", "Laberinto Config" },
		{ "ModuleRelativePath", "LaberintoFacade.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Director;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niveles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AnchoLaberinto;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AltoLaberinto;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NivelActual_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NivelActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaberintoFacade_AvanzarAlSiguienteNivel, "AvanzarAlSiguienteNivel" }, // 2985374057
		{ &Z_Construct_UFunction_ALaberintoFacade_CrearEspaciosLibres, "CrearEspaciosLibres" }, // 1169476923
		{ &Z_Construct_UFunction_ALaberintoFacade_CrearLaberinto, "CrearLaberinto" }, // 2272480795
		{ &Z_Construct_UFunction_ALaberintoFacade_CrearLaberintoPorNivel, "CrearLaberintoPorNivel" }, // 2641249678
		{ &Z_Construct_UFunction_ALaberintoFacade_GestionarAnimaciones, "GestionarAnimaciones" }, // 192312720
		{ &Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesDestructibles, "GetCantidadBloquesDestructibles" }, // 308822367
		{ &Z_Construct_UFunction_ALaberintoFacade_GetCantidadBloquesIndestructibles, "GetCantidadBloquesIndestructibles" }, // 748383653
		{ &Z_Construct_UFunction_ALaberintoFacade_GetNivelActual, "GetNivelActual" }, // 799219446
		{ &Z_Construct_UFunction_ALaberintoFacade_GetNombreNivel, "GetNombreNivel" }, // 2363828496
		{ &Z_Construct_UFunction_ALaberintoFacade_GetPosicionAleatoriLibre, "GetPosicionAleatoriLibre" }, // 1959027000
		{ &Z_Construct_UFunction_ALaberintoFacade_GetTamanoLaberinto, "GetTamanoLaberinto" }, // 3571433433
		{ &Z_Construct_UFunction_ALaberintoFacade_InicializarSistemaCompleto, "InicializarSistemaCompleto" }, // 736085990
		{ &Z_Construct_UFunction_ALaberintoFacade_IsCompositeActivo, "IsCompositeActivo" }, // 8550930
		{ &Z_Construct_UFunction_ALaberintoFacade_IsLaberintoCreado, "IsLaberintoCreado" }, // 773749968
		{ &Z_Construct_UFunction_ALaberintoFacade_IsPosicionLibre, "IsPosicionLibre" }, // 2416903155
		{ &Z_Construct_UFunction_ALaberintoFacade_ResetearNivelActual, "ResetearNivelActual" }, // 1166348467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoFacade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, Director), Z_Construct_UClass_ADirectorBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Director_MetaData), NewProp_Director_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_LaberintoBuilder = { "LaberintoBuilder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, LaberintoBuilder), Z_Construct_UClass_ALaberintoBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoBuilder_MetaData), NewProp_LaberintoBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_CompositeManager = { "CompositeManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, CompositeManager), Z_Construct_UClass_ACompositeManagerLaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeManager_MetaData), NewProp_CompositeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_Niveles = { "Niveles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, Niveles), Z_Construct_UClass_ANiveles_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niveles_MetaData), NewProp_Niveles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_AnchoLaberinto = { "AnchoLaberinto", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, AnchoLaberinto), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchoLaberinto_MetaData), NewProp_AnchoLaberinto_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_AltoLaberinto = { "AltoLaberinto", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, AltoLaberinto), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AltoLaberinto_MetaData), NewProp_AltoLaberinto_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_NivelActual_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_NivelActual = { "NivelActual", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoFacade, NivelActual), Z_Construct_UEnum_Ex_Final_ETipoLaberinto, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NivelActual_MetaData), NewProp_NivelActual_MetaData) }; // 2687121364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberintoFacade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_Director,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_LaberintoBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_CompositeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_Niveles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_AnchoLaberinto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_AltoLaberinto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_NivelActual_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoFacade_Statics::NewProp_NivelActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoFacade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberintoFacade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoFacade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoFacade_Statics::ClassParams = {
	&ALaberintoFacade::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALaberintoFacade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoFacade_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoFacade_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoFacade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoFacade()
{
	if (!Z_Registration_Info_UClass_ALaberintoFacade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoFacade.OuterSingleton, Z_Construct_UClass_ALaberintoFacade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoFacade.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ALaberintoFacade>()
{
	return ALaberintoFacade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoFacade);
ALaberintoFacade::~ALaberintoFacade() {}
// End Class ALaberintoFacade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoLaberinto_StaticEnum, TEXT("ETipoLaberinto"), &Z_Registration_Info_UEnum_ETipoLaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2687121364U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoFacade, ALaberintoFacade::StaticClass, TEXT("ALaberintoFacade"), &Z_Registration_Info_UClass_ALaberintoFacade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoFacade), 1196861765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_3797162894(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
