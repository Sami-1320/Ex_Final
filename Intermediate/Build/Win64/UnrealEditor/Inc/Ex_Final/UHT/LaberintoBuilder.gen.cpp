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
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ALaberintoBuilder
void ALaberintoBuilder::StaticRegisterNativesALaberintoBuilder()
{
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
	nullptr,
	Z_Construct_UClass_ALaberintoBuilder_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ALaberintoBuilder, ALaberintoBuilder::StaticClass, TEXT("ALaberintoBuilder"), &Z_Registration_Info_UClass_ALaberintoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoBuilder), 186236167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_3343832546(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
