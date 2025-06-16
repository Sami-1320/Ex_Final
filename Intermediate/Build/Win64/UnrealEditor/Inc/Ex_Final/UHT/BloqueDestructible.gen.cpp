// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/BloqueDestructible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueDestructible() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueDestructible();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_UIBloqueComposite_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ABloqueDestructible
void ABloqueDestructible::StaticRegisterNativesABloqueDestructible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueDestructible);
UClass* Z_Construct_UClass_ABloqueDestructible_NoRegister()
{
	return ABloqueDestructible::StaticClass();
}
struct Z_Construct_UClass_ABloqueDestructible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueDestructible.h" },
		{ "ModuleRelativePath", "BloqueDestructible.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueDestructible.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovimientoActivo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables de movimiento\n" },
#endif
		{ "ModuleRelativePath", "BloqueDestructible.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables de movimiento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "BloqueDestructible.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
	static void NewProp_bMovimientoActivo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovimientoActivo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoMovimiento;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueDestructible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueDestructible, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootScene_MetaData), NewProp_RootScene_MetaData) };
void Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_bMovimientoActivo_SetBit(void* Obj)
{
	((ABloqueDestructible*)Obj)->bMovimientoActivo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_bMovimientoActivo = { "bMovimientoActivo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloqueDestructible), &Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_bMovimientoActivo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovimientoActivo_MetaData), NewProp_bMovimientoActivo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_TiempoMovimiento = { "TiempoMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueDestructible, TiempoMovimiento), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoMovimiento_MetaData), NewProp_TiempoMovimiento_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueDestructible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_RootScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_bMovimientoActivo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueDestructible_Statics::NewProp_TiempoMovimiento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueDestructible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueDestructible_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBloqueComposite_NoRegister, (int32)VTABLE_OFFSET(ABloqueDestructible, IIBloqueComposite), false },  // 22288043
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueDestructible_Statics::ClassParams = {
	&ABloqueDestructible::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueDestructible_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueDestructible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueDestructible()
{
	if (!Z_Registration_Info_UClass_ABloqueDestructible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueDestructible.OuterSingleton, Z_Construct_UClass_ABloqueDestructible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueDestructible.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ABloqueDestructible>()
{
	return ABloqueDestructible::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueDestructible);
ABloqueDestructible::~ABloqueDestructible() {}
// End Class ABloqueDestructible

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueDestructible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueDestructible, ABloqueDestructible::StaticClass, TEXT("ABloqueDestructible"), &Z_Registration_Info_UClass_ABloqueDestructible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueDestructible), 1754793774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueDestructible_h_107122881(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueDestructible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueDestructible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
