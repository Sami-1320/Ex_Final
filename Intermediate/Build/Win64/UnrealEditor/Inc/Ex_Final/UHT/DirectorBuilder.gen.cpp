// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/DirectorBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorBuilder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EX_FINAL_API UClass* Z_Construct_UClass_ADirectorBuilder();
EX_FINAL_API UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ADirectorBuilder
void ADirectorBuilder::StaticRegisterNativesADirectorBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectorBuilder);
UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister()
{
	return ADirectorBuilder::StaticClass();
}
struct Z_Construct_UClass_ADirectorBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorBuilder.h" },
		{ "ModuleRelativePath", "DirectorBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Builder_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CORREGIDO: Usar TScriptInterface para interfaces en Unreal Engine\n" },
#endif
		{ "ModuleRelativePath", "DirectorBuilder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CORREGIDO: Usar TScriptInterface para interfaces en Unreal Engine" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ADirectorBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADirectorBuilder, Builder), Z_Construct_UClass_UILaberintoBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Builder_MetaData), NewProp_Builder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADirectorBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADirectorBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectorBuilder_Statics::ClassParams = {
	&ADirectorBuilder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADirectorBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilder_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirectorBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirectorBuilder()
{
	if (!Z_Registration_Info_UClass_ADirectorBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectorBuilder.OuterSingleton, Z_Construct_UClass_ADirectorBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirectorBuilder.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ADirectorBuilder>()
{
	return ADirectorBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorBuilder);
ADirectorBuilder::~ADirectorBuilder() {}
// End Class ADirectorBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_DirectorBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirectorBuilder, ADirectorBuilder::StaticClass, TEXT("ADirectorBuilder"), &Z_Registration_Info_UClass_ADirectorBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectorBuilder), 1456917681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_DirectorBuilder_h_402224631(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_DirectorBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_DirectorBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
