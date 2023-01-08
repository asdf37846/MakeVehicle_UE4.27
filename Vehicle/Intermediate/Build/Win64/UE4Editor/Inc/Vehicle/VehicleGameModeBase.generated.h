// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLE_VehicleGameModeBase_generated_h
#error "VehicleGameModeBase.generated.h already included, missing '#pragma once' in VehicleGameModeBase.h"
#endif
#define VEHICLE_VehicleGameModeBase_generated_h

#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_SPARSE_DATA
#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_RPC_WRAPPERS
#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleGameModeBase(); \
	friend struct Z_Construct_UClass_AVehicleGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vehicle"), NO_API) \
	DECLARE_SERIALIZER(AVehicleGameModeBase)


#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVehicleGameModeBase(); \
	friend struct Z_Construct_UClass_AVehicleGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vehicle"), NO_API) \
	DECLARE_SERIALIZER(AVehicleGameModeBase)


#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleGameModeBase(AVehicleGameModeBase&&); \
	NO_API AVehicleGameModeBase(const AVehicleGameModeBase&); \
public:


#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleGameModeBase(AVehicleGameModeBase&&); \
	NO_API AVehicleGameModeBase(const AVehicleGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleGameModeBase)


#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_12_PROLOG
#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_SPARSE_DATA \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_RPC_WRAPPERS \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_INCLASS \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_SPARSE_DATA \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Vehicle_Source_Vehicle_VehicleGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLE_API UClass* StaticClass<class AVehicleGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vehicle_Source_Vehicle_VehicleGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
