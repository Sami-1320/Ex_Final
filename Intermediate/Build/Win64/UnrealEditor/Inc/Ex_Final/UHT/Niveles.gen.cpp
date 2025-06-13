// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/Niveles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiveles() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ANiveles();
EX_FINAL_API UClass* Z_Construct_UClass_ANiveles_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ANiveles
void ANiveles::StaticRegisterNativesANiveles()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiveles);
UClass* Z_Construct_UClass_ANiveles_NoRegister()
{
	return ANiveles::StaticClass();
}
struct Z_Construct_UClass_ANiveles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Niveles.h" },
		{ "ModuleRelativePath", "Niveles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoRef_MetaData[] = {
		{ "ModuleRelativePath", "Niveles.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiveles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiveles_Statics::NewProp_LaberintoRef = { "LaberintoRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiveles, LaberintoRef), Z_Construct_UClass_ALaberintoBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoRef_MetaData), NewProp_LaberintoRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiveles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiveles_Statics::NewProp_LaberintoRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiveles_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANiveles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiveles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiveles_Statics::ClassParams = {
	&ANiveles::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANiveles_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANiveles_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANiveles_Statics::Class_MetaDataParams), Z_Construct_UClass_ANiveles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANiveles()
{
	if (!Z_Registration_Info_UClass_ANiveles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiveles.OuterSingleton, Z_Construct_UClass_ANiveles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANiveles.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ANiveles>()
{
	return ANiveles::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANiveles);
ANiveles::~ANiveles() {}
// End Class ANiveles

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Niveles_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANiveles, ANiveles::StaticClass, TEXT("ANiveles"), &Z_Registration_Info_UClass_ANiveles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiveles), 283750424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Niveles_h_1771005883(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Niveles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Niveles_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
