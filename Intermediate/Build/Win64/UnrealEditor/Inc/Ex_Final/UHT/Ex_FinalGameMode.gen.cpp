// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/Ex_FinalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEx_FinalGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ACompositeManagerLaberinto_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_AEx_FinalGameMode();
EX_FINAL_API UClass* Z_Construct_UClass_AEx_FinalGameMode_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ALaberintoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class AEx_FinalGameMode
void AEx_FinalGameMode::StaticRegisterNativesAEx_FinalGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEx_FinalGameMode);
UClass* Z_Construct_UClass_AEx_FinalGameMode_NoRegister()
{
	return AEx_FinalGameMode::StaticClass();
}
struct Z_Construct_UClass_AEx_FinalGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Ex_FinalGameMode.h" },
		{ "ModuleRelativePath", "Ex_FinalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Director_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Builder Pattern\n" },
#endif
		{ "ModuleRelativePath", "Ex_FinalGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder Pattern" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoBuilder_MetaData[] = {
		{ "ModuleRelativePath", "Ex_FinalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Composite Pattern\n" },
#endif
		{ "ModuleRelativePath", "Ex_FinalGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Composite Pattern" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al PlayerController generado\n" },
#endif
		{ "ModuleRelativePath", "Ex_FinalGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al PlayerController generado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Director;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEx_FinalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEx_FinalGameMode, Director), Z_Construct_UClass_ADirectorBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Director_MetaData), NewProp_Director_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_LaberintoBuilder = { "LaberintoBuilder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEx_FinalGameMode, LaberintoBuilder), Z_Construct_UClass_ALaberintoBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoBuilder_MetaData), NewProp_LaberintoBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_CompositeManager = { "CompositeManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEx_FinalGameMode, CompositeManager), Z_Construct_UClass_ACompositeManagerLaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeManager_MetaData), NewProp_CompositeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEx_FinalGameMode, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEx_FinalGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_Director,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_LaberintoBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_CompositeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEx_FinalGameMode_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEx_FinalGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEx_FinalGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEx_FinalGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEx_FinalGameMode_Statics::ClassParams = {
	&AEx_FinalGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEx_FinalGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEx_FinalGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEx_FinalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEx_FinalGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEx_FinalGameMode()
{
	if (!Z_Registration_Info_UClass_AEx_FinalGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEx_FinalGameMode.OuterSingleton, Z_Construct_UClass_AEx_FinalGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEx_FinalGameMode.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<AEx_FinalGameMode>()
{
	return AEx_FinalGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEx_FinalGameMode);
AEx_FinalGameMode::~AEx_FinalGameMode() {}
// End Class AEx_FinalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Ex_FinalGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEx_FinalGameMode, AEx_FinalGameMode::StaticClass, TEXT("AEx_FinalGameMode"), &Z_Registration_Info_UClass_AEx_FinalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEx_FinalGameMode), 1328645743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Ex_FinalGameMode_h_2108315641(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Ex_FinalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_Ex_FinalGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
