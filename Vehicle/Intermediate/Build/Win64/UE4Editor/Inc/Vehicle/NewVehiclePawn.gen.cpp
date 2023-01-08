// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicle/NewVehiclePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewVehiclePawn() {}
// Cross Module References
	VEHICLE_API UClass* Z_Construct_UClass_ANewVehiclePawn_NoRegister();
	VEHICLE_API UClass* Z_Construct_UClass_ANewVehiclePawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_Vehicle();
// End Cross Module References
	void ANewVehiclePawn::StaticRegisterNativesANewVehiclePawn()
	{
	}
	UClass* Z_Construct_UClass_ANewVehiclePawn_NoRegister()
	{
		return ANewVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_ANewVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewVehiclePawn.h" },
		{ "ModuleRelativePath", "NewVehiclePawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewVehiclePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewVehiclePawn_Statics::ClassParams = {
		&ANewVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewVehiclePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewVehiclePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewVehiclePawn, 3932433855);
	template<> VEHICLE_API UClass* StaticClass<ANewVehiclePawn>()
	{
		return ANewVehiclePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewVehiclePawn(Z_Construct_UClass_ANewVehiclePawn, &ANewVehiclePawn::StaticClass, TEXT("/Script/Vehicle"), TEXT("ANewVehiclePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewVehiclePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
