// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/IBloqueComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBloqueComposite() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
EX_FINAL_API UClass* Z_Construct_UClass_UIBloqueComposite();
EX_FINAL_API UClass* Z_Construct_UClass_UIBloqueComposite_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Interface UIBloqueComposite
void UIBloqueComposite::StaticRegisterNativesUIBloqueComposite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIBloqueComposite);
UClass* Z_Construct_UClass_UIBloqueComposite_NoRegister()
{
	return UIBloqueComposite::StaticClass();
}
struct Z_Construct_UClass_UIBloqueComposite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBloqueComposite.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBloqueComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIBloqueComposite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueComposite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIBloqueComposite_Statics::ClassParams = {
	&UIBloqueComposite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueComposite_Statics::Class_MetaDataParams), Z_Construct_UClass_UIBloqueComposite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIBloqueComposite()
{
	if (!Z_Registration_Info_UClass_UIBloqueComposite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIBloqueComposite.OuterSingleton, Z_Construct_UClass_UIBloqueComposite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIBloqueComposite.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<UIBloqueComposite>()
{
	return UIBloqueComposite::StaticClass();
}
UIBloqueComposite::UIBloqueComposite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIBloqueComposite);
UIBloqueComposite::~UIBloqueComposite() {}
// End Interface UIBloqueComposite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_IBloqueComposite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIBloqueComposite, UIBloqueComposite::StaticClass, TEXT("UIBloqueComposite"), &Z_Registration_Info_UClass_UIBloqueComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIBloqueComposite), 22288043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_IBloqueComposite_h_2923245043(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_IBloqueComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_IBloqueComposite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
