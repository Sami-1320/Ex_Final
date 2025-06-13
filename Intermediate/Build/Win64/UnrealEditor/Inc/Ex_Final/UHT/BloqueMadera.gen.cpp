// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/BloqueMadera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMadera() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBase();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueMadera();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ABloqueMadera
void ABloqueMadera::StaticRegisterNativesABloqueMadera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueMadera);
UClass* Z_Construct_UClass_ABloqueMadera_NoRegister()
{
	return ABloqueMadera::StaticClass();
}
struct Z_Construct_UClass_ABloqueMadera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueMadera.h" },
		{ "ModuleRelativePath", "BloqueMadera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WoodMaterial_MetaData[] = {
		{ "ModuleRelativePath", "BloqueMadera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WoodMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMadera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueMadera_Statics::NewProp_WoodMaterial = { "WoodMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueMadera, WoodMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WoodMaterial_MetaData), NewProp_WoodMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueMadera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueMadera_Statics::NewProp_WoodMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMadera_Statics::ClassParams = {
	&ABloqueMadera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueMadera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueMadera()
{
	if (!Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton, Z_Construct_UClass_ABloqueMadera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ABloqueMadera>()
{
	return ABloqueMadera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMadera);
ABloqueMadera::~ABloqueMadera() {}
// End Class ABloqueMadera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueMadera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueMadera, ABloqueMadera::StaticClass, TEXT("ABloqueMadera"), &Z_Registration_Info_UClass_ABloqueMadera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueMadera), 78432406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueMadera_h_2758922421(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueMadera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueMadera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
