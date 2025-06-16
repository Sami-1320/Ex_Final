// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/BloqueBurbuja.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBurbuja() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBase();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBurbuja();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ABloqueBurbuja
void ABloqueBurbuja::StaticRegisterNativesABloqueBurbuja()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBurbuja);
UClass* Z_Construct_UClass_ABloqueBurbuja_NoRegister()
{
	return ABloqueBurbuja::StaticClass();
}
struct Z_Construct_UClass_ABloqueBurbuja_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "BloqueBurbuja.h" },
		{ "ModuleRelativePath", "BloqueBurbuja.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleMaterial_MetaData[] = {
		{ "ModuleRelativePath", "BloqueBurbuja.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BubbleMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBurbuja>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_BubbleMaterial = { "BubbleMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBurbuja, BubbleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleMaterial_MetaData), NewProp_BubbleMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBurbuja_Statics::NewProp_BubbleMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams = {
	&ABloqueBurbuja::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBurbuja_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBurbuja()
{
	if (!Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton, Z_Construct_UClass_ABloqueBurbuja_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBurbuja.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ABloqueBurbuja>()
{
	return ABloqueBurbuja::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBurbuja);
ABloqueBurbuja::~ABloqueBurbuja() {}
// End Class ABloqueBurbuja

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBurbuja_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBurbuja, ABloqueBurbuja::StaticClass, TEXT("ABloqueBurbuja"), &Z_Registration_Info_UClass_ABloqueBurbuja, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBurbuja), 693600214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBurbuja_h_1362729147(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBurbuja_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBurbuja_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
