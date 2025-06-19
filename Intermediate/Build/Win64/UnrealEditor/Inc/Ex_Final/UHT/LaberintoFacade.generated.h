// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LaberintoFacade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETipoLaberinto : uint8;
#ifdef EX_FINAL_LaberintoFacade_generated_h
#error "LaberintoFacade.generated.h already included, missing '#pragma once' in LaberintoFacade.h"
#endif
#define EX_FINAL_LaberintoFacade_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPosicionAleatoriLibre); \
	DECLARE_FUNCTION(execIsPosicionLibre); \
	DECLARE_FUNCTION(execCrearEspaciosLibres); \
	DECLARE_FUNCTION(execGetTamanoLaberinto); \
	DECLARE_FUNCTION(execGetCantidadBloquesIndestructibles); \
	DECLARE_FUNCTION(execGetCantidadBloquesDestructibles); \
	DECLARE_FUNCTION(execGetNombreNivel); \
	DECLARE_FUNCTION(execGetNivelActual); \
	DECLARE_FUNCTION(execIsCompositeActivo); \
	DECLARE_FUNCTION(execIsLaberintoCreado); \
	DECLARE_FUNCTION(execInicializarSistemaCompleto); \
	DECLARE_FUNCTION(execGestionarAnimaciones); \
	DECLARE_FUNCTION(execResetearNivelActual); \
	DECLARE_FUNCTION(execAvanzarAlSiguienteNivel); \
	DECLARE_FUNCTION(execCrearLaberinto); \
	DECLARE_FUNCTION(execCrearLaberintoPorNivel);


#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaberintoFacade(); \
	friend struct Z_Construct_UClass_ALaberintoFacade_Statics; \
public: \
	DECLARE_CLASS(ALaberintoFacade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ex_Final"), NO_API) \
	DECLARE_SERIALIZER(ALaberintoFacade)


#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALaberintoFacade(ALaberintoFacade&&); \
	ALaberintoFacade(const ALaberintoFacade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaberintoFacade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaberintoFacade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaberintoFacade) \
	NO_API virtual ~ALaberintoFacade();


#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_22_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EX_FINAL_API UClass* StaticClass<class ALaberintoFacade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_Ex_Final_Source_Ex_Final_LaberintoFacade_h


#define FOREACH_ENUM_ETIPOLABERINTO(op) \
	op(ETipoLaberinto::Randomico) \
	op(ETipoLaberinto::Concreto) \
	op(ETipoLaberinto::Ladrillo) \
	op(ETipoLaberinto::Madera) \
	op(ETipoLaberinto::Burbuja) 

enum class ETipoLaberinto : uint8;
template<> struct TIsUEnumClass<ETipoLaberinto> { enum { Value = true }; };
template<> EX_FINAL_API UEnum* StaticEnum<ETipoLaberinto>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
