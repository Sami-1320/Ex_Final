// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EX_FINAL_BloqueBase_generated_h
#error "BloqueBase.generated.h already included, missing '#pragma once' in BloqueBase.h"
#endif
#define EX_FINAL_BloqueBase_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueBase(); \
	friend struct Z_Construct_UClass_ABloqueBase_Statics; \
public: \
	DECLARE_CLASS(ABloqueBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ex_Final"), NO_API) \
	DECLARE_SERIALIZER(ABloqueBase)


#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueBase(ABloqueBase&&); \
	ABloqueBase(const ABloqueBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueBase) \
	NO_API virtual ~ABloqueBase();


#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_22_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EX_FINAL_API UClass* StaticClass<class ABloqueBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_BloqueBase_h


#define FOREACH_ENUM_ETIPOBLOQUE(op) \
	op(ETipoBloque::Vacio) \
	op(ETipoBloque::Acero) \
	op(ETipoBloque::Madera) \
	op(ETipoBloque::Ladrillo) \
	op(ETipoBloque::Concreto) \
	op(ETipoBloque::Burbuja) 

enum class ETipoBloque : uint8;
template<> struct TIsUEnumClass<ETipoBloque> { enum { Value = true }; };
template<> EX_FINAL_API UEnum* StaticEnum<ETipoBloque>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
