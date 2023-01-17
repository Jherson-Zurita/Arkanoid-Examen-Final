// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/FabricaMov.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMov() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_AFabricaMov_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_AFabricaMov();
	ARKANOID_API UClass* Z_Construct_UClass_AFabrica();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void AFabricaMov::StaticRegisterNativesAFabricaMov()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMov_NoRegister()
	{
		return AFabricaMov::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMov_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMov_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabrica,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMov_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaMov.h" },
		{ "ModuleRelativePath", "FabricaMov.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMov_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMov>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMov_Statics::ClassParams = {
		&AFabricaMov::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMov_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMov_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMov()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMov_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMov, 1001870759);
	template<> ARKANOID_API UClass* StaticClass<AFabricaMov>()
	{
		return AFabricaMov::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMov(Z_Construct_UClass_AFabricaMov, &AFabricaMov::StaticClass, TEXT("/Script/Arkanoid"), TEXT("AFabricaMov"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMov);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
