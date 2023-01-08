// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLE_NewVehiclePawn_generated_h
#error "NewVehiclePawn.generated.h already included, missing '#pragma once' in NewVehiclePawn.h"
#endif
#define VEHICLE_NewVehiclePawn_generated_h

#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_SPARSE_DATA
#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_RPC_WRAPPERS
#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewVehiclePawn(); \
	friend struct Z_Construct_UClass_ANewVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(ANewVehiclePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vehicle"), NO_API) \
	DECLARE_SERIALIZER(ANewVehiclePawn)


#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANewVehiclePawn(); \
	friend struct Z_Construct_UClass_ANewVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(ANewVehiclePawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vehicle"), NO_API) \
	DECLARE_SERIALIZER(ANewVehiclePawn)


#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewVehiclePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewVehiclePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewVehiclePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewVehiclePawn(ANewVehiclePawn&&); \
	NO_API ANewVehiclePawn(const ANewVehiclePawn&); \
public:


#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewVehiclePawn(ANewVehiclePawn&&); \
	NO_API ANewVehiclePawn(const ANewVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewVehiclePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewVehiclePawn)


#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ANewVehiclePawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ANewVehiclePawn, Camera); }


#define Vehicle_Source_Vehicle_NewVehiclePawn_h_12_PROLOG
#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_SPARSE_DATA \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_RPC_WRAPPERS \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_INCLASS \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vehicle_Source_Vehicle_NewVehiclePawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_PRIVATE_PROPERTY_OFFSET \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_SPARSE_DATA \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_INCLASS_NO_PURE_DECLS \
	Vehicle_Source_Vehicle_NewVehiclePawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLE_API UClass* StaticClass<class ANewVehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vehicle_Source_Vehicle_NewVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
