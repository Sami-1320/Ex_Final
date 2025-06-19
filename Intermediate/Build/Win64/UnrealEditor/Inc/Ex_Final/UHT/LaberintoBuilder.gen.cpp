// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/LaberintoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
EX_FINAL_API UEnum* Z_Construct_UEnum_Ex_Final_ETipoBloque();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ALaberintoBuilder Function CrearBloque
struct Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics
{
	struct LaberintoBuilder_eventCrearBloque_Parms
	{
		ETipoBloque TipoBloque;
		FVector Posicion;
		ABloqueBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Laberinto Builder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === M\xef\xbf\xbdTODO P\xef\xbf\xbd""BLICO PARA EL FACADE ===\n// Crear bloque espec\xef\xbf\xbd""fico (usado por Facade para niveles espec\xef\xbf\xbd""ficos)\n" },
#endif
		{ "ModuleRelativePath", "LaberintoBuilder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== M\xef\xbf\xbdTODO P\xef\xbf\xbd""BLICO PARA EL FACADE ===\nCrear bloque espec\xef\xbf\xbd""fico (usado por Facade para niveles espec\xef\xbf\xbd""ficos)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Posicion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TipoBloque_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TipoBloque;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_TipoBloque_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_TipoBloque = { "TipoBloque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoBuilder_eventCrearBloque_Parms, TipoBloque), Z_Construct_UEnum_Ex_Final_ETipoBloque, METADATA_PARAMS(0, nullptr) }; // 3283181396
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoBuilder_eventCrearBloque_Parms, Posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Posicion_MetaData), NewProp_Posicion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LaberintoBuilder_eventCrearBloque_Parms, ReturnValue), Z_Construct_UClass_ABloqueBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_TipoBloque_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_TipoBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_Posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaberintoBuilder, nullptr, "CrearBloque", nullptr, nullptr, Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::LaberintoBuilder_eventCrearBloque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::LaberintoBuilder_eventCrearBloque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaberintoBuilder_CrearBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALaberintoBuilder_CrearBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALaberintoBuilder::execCrearBloque)
{
	P_GET_ENUM(ETipoBloque,Z_Param_TipoBloque);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABloqueBase**)Z_Param__Result=P_THIS->CrearBloque(ETipoBloque(Z_Param_TipoBloque),Z_Param_Out_Posicion);
	P_NATIVE_END;
}
// End Class ALaberintoBuilder Function CrearBloque

// Begin Class ALaberintoBuilder
void ALaberintoBuilder::StaticRegisterNativesALaberintoBuilder()
{
	UClass* Class = ALaberintoBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CrearBloque", &ALaberintoBuilder::execCrearBloque },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoBuilder);
UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister()
{
	return ALaberintoBuilder::StaticClass();
}
struct Z_Construct_UClass_ALaberintoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoBuilder.h" },
		{ "ModuleRelativePath", "LaberintoBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paredes_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesPiso_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesDestructibles_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Paredes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Paredes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesPiso_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesPiso;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesDestructibles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesDestructibles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaberintoBuilder_CrearBloque, "CrearBloque" }, // 1026927857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_Paredes_Inner = { "Paredes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_Paredes = { "Paredes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoBuilder, Paredes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paredes_MetaData), NewProp_Paredes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesPiso_Inner = { "BloquesPiso", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesPiso = { "BloquesPiso", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoBuilder, BloquesPiso), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesPiso_MetaData), NewProp_BloquesPiso_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesDestructibles_Inner = { "BloquesDestructibles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesDestructibles = { "BloquesDestructibles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoBuilder, BloquesDestructibles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesDestructibles_MetaData), NewProp_BloquesDestructibles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberintoBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_Paredes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_Paredes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesPiso_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesPiso,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesDestructibles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilder_Statics::NewProp_BloquesDestructibles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberintoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoBuilder_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoBuilder, IILaberintoBuilder), false },  // 1250155871
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoBuilder_Statics::ClassParams = {
	&ALaberintoBuilder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALaberintoBuilder_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilder_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoBuilder()
{
	if (!Z_Registration_Info_UClass_ALaberintoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoBuilder.OuterSingleton, Z_Construct_UClass_ALaberintoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoBuilder.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ALaberintoBuilder>()
{
	return ALaberintoBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoBuilder);
ALaberintoBuilder::~ALaberintoBuilder() {}
// End Class ALaberintoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoBuilder, ALaberintoBuilder::StaticClass, TEXT("ALaberintoBuilder"), &Z_Registration_Info_UClass_ALaberintoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoBuilder), 3313808223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_4055699906(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
