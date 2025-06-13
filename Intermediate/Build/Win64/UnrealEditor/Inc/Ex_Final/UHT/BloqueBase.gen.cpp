// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ex_Final/BloqueBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBase();
EX_FINAL_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
EX_FINAL_API UEnum* Z_Construct_UEnum_Ex_Final_ETipoBloque();
UPackage* Z_Construct_UPackage__Script_Ex_Final();
// End Cross Module References

// Begin Enum ETipoBloque
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETipoBloque;
static UEnum* ETipoBloque_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETipoBloque.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETipoBloque.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Ex_Final_ETipoBloque, (UObject*)Z_Construct_UPackage__Script_Ex_Final(), TEXT("ETipoBloque"));
	}
	return Z_Registration_Info_UEnum_ETipoBloque.OuterSingleton;
}
template<> EX_FINAL_API UEnum* StaticEnum<ETipoBloque>()
{
	return ETipoBloque_StaticEnum();
}
struct Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Acero.Name", "ETipoBloque::Acero" },
		{ "BlueprintType", "true" },
		{ "Burbuja.Name", "ETipoBloque::Burbuja" },
		{ "Concreto.Name", "ETipoBloque::Concreto" },
		{ "Ladrillo.Name", "ETipoBloque::Ladrillo" },
		{ "Madera.Name", "ETipoBloque::Madera" },
		{ "ModuleRelativePath", "BloqueBase.h" },
		{ "Vacio.Name", "ETipoBloque::Vacio" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETipoBloque::Vacio", (int64)ETipoBloque::Vacio },
		{ "ETipoBloque::Acero", (int64)ETipoBloque::Acero },
		{ "ETipoBloque::Madera", (int64)ETipoBloque::Madera },
		{ "ETipoBloque::Ladrillo", (int64)ETipoBloque::Ladrillo },
		{ "ETipoBloque::Concreto", (int64)ETipoBloque::Concreto },
		{ "ETipoBloque::Burbuja", (int64)ETipoBloque::Burbuja },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Ex_Final,
	nullptr,
	"ETipoBloque",
	"ETipoBloque",
	Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Ex_Final_ETipoBloque()
{
	if (!Z_Registration_Info_UEnum_ETipoBloque.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETipoBloque.InnerSingleton, Z_Construct_UEnum_Ex_Final_ETipoBloque_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETipoBloque.InnerSingleton;
}
// End Enum ETipoBloque

// Begin Class ABloqueBase
void ABloqueBase::StaticRegisterNativesABloqueBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBase);
UClass* Z_Construct_UClass_ABloqueBase_NoRegister()
{
	return ABloqueBase::StaticClass();
}
struct Z_Construct_UClass_ABloqueBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueBase.h" },
		{ "ModuleRelativePath", "BloqueBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRef_MetaData[] = {
		{ "ModuleRelativePath", "BloqueBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBase_Statics::NewProp_MaterialRef = { "MaterialRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBase, MaterialRef), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialRef_MetaData), NewProp_MaterialRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBase_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBase_Statics::NewProp_MaterialRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Ex_Final,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBase_Statics::ClassParams = {
	&ABloqueBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBase()
{
	if (!Z_Registration_Info_UClass_ABloqueBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBase.OuterSingleton, Z_Construct_UClass_ABloqueBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBase.OuterSingleton;
}
template<> EX_FINAL_API UClass* StaticClass<ABloqueBase>()
{
	return ABloqueBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBase);
ABloqueBase::~ABloqueBase() {}
// End Class ABloqueBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETipoBloque_StaticEnum, TEXT("ETipoBloque"), &Z_Registration_Info_UEnum_ETipoBloque, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3283181396U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBase, ABloqueBase::StaticClass, TEXT("ABloqueBase"), &Z_Registration_Info_UClass_ABloqueBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBase), 150214404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_2953493733(TEXT("/Script/Ex_Final"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
