// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/CompositeManagerLaberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeManagerLaberinto() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueIndestructible_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ACompositeManagerLaberinto();
EX_FINAL_API UClass* Z_Construct_UClass_ACompositeManagerLaberinto_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ACompositeManagerLaberinto
void ACompositeManagerLaberinto::StaticRegisterNativesACompositeManagerLaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACompositeManagerLaberinto);
UClass* Z_Construct_UClass_ACompositeManagerLaberinto_NoRegister()
{
	return ACompositeManagerLaberinto::StaticClass();
}
struct Z_Construct_UClass_ACompositeManagerLaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CompositeManagerLaberinto.h" },
		{ "ModuleRelativePath", "CompositeManagerLaberinto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrupoDestructible_MetaData[] = {
		{ "ModuleRelativePath", "CompositeManagerLaberinto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrupoIndestructible_MetaData[] = {
		{ "ModuleRelativePath", "CompositeManagerLaberinto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrupoDestructible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrupoIndestructible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositeManagerLaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeManagerLaberinto_Statics::NewProp_GrupoDestructible = { "GrupoDestructible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeManagerLaberinto, GrupoDestructible), Z_Construct_UClass_ABloqueDestructible_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrupoDestructible_MetaData), NewProp_GrupoDestructible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeManagerLaberinto_Statics::NewProp_GrupoIndestructible = { "GrupoIndestructible", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeManagerLaberinto, GrupoIndestructible), Z_Construct_UClass_ABloqueIndestructible_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrupoIndestructible_MetaData), NewProp_GrupoIndestructible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositeManagerLaberinto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeManagerLaberinto_Statics::NewProp_GrupoDestructible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeManagerLaberinto_Statics::NewProp_GrupoIndestructible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeManagerLaberinto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACompositeManagerLaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeManagerLaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompositeManagerLaberinto_Statics::ClassParams = {
	&ACompositeManagerLaberinto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACompositeManagerLaberinto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeManagerLaberinto_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeManagerLaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_ACompositeManagerLaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACompositeManagerLaberinto()
{
	if (!Z_Registration_Info_UClass_ACompositeManagerLaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompositeManagerLaberinto.OuterSingleton, Z_Construct_UClass_ACompositeManagerLaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACompositeManagerLaberinto.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ACompositeManagerLaberinto>()
{
	return ACompositeManagerLaberinto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositeManagerLaberinto);
ACompositeManagerLaberinto::~ACompositeManagerLaberinto() {}
// End Class ACompositeManagerLaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_CompositeManagerLaberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACompositeManagerLaberinto, ACompositeManagerLaberinto::StaticClass, TEXT("ACompositeManagerLaberinto"), &Z_Registration_Info_UClass_ACompositeManagerLaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositeManagerLaberinto), 1790460940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_CompositeManagerLaberinto_h_2073151247(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_CompositeManagerLaberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_CompositeManagerLaberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
