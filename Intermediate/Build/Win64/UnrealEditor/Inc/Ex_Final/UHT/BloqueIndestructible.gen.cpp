// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/BloqueIndestructible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueIndestructible() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueIndestructible();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueIndestructible_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_UIBloqueComposite_NoRegister();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Class ABloqueIndestructible
void ABloqueIndestructible::StaticRegisterNativesABloqueIndestructible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueIndestructible);
UClass* Z_Construct_UClass_ABloqueIndestructible_NoRegister()
{
	return ABloqueIndestructible::StaticClass();
}
struct Z_Construct_UClass_ABloqueIndestructible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueIndestructible.h" },
		{ "ModuleRelativePath", "BloqueIndestructible.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueIndestructible.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovimientoActivo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables de movimiento\n" },
#endif
		{ "ModuleRelativePath", "BloqueIndestructible.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables de movimiento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "BloqueIndestructible.h" },
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
		TCppClassTypeTraits<ABloqueIndestructible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueIndestructible, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootScene_MetaData), NewProp_RootScene_MetaData) };
void Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_bMovimientoActivo_SetBit(void* Obj)
{
	((ABloqueIndestructible*)Obj)->bMovimientoActivo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_bMovimientoActivo = { "bMovimientoActivo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABloqueIndestructible), &Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_bMovimientoActivo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovimientoActivo_MetaData), NewProp_bMovimientoActivo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_TiempoMovimiento = { "TiempoMovimiento", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueIndestructible, TiempoMovimiento), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoMovimiento_MetaData), NewProp_TiempoMovimiento_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueIndestructible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_RootScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_bMovimientoActivo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueIndestructible_Statics::NewProp_TiempoMovimiento,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndestructible_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueIndestructible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndestructible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueIndestructible_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBloqueComposite_NoRegister, (int32)VTABLE_OFFSET(ABloqueIndestructible, IIBloqueComposite), false },  // 22288043
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueIndestructible_Statics::ClassParams = {
	&ABloqueIndestructible::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueIndestructible_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndestructible_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueIndestructible_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueIndestructible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueIndestructible()
{
	if (!Z_Registration_Info_UClass_ABloqueIndestructible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueIndestructible.OuterSingleton, Z_Construct_UClass_ABloqueIndestructible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueIndestructible.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ABloqueIndestructible>()
{
	return ABloqueIndestructible::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueIndestructible);
ABloqueIndestructible::~ABloqueIndestructible() {}
// End Class ABloqueIndestructible

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueIndestructible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueIndestructible, ABloqueIndestructible::StaticClass, TEXT("ABloqueIndestructible"), &Z_Registration_Info_UClass_ABloqueIndestructible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueIndestructible), 2857818870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueIndestructible_h_3691646194(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueIndestructible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueIndestructible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
