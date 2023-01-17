// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/BrickRecto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrickRecto() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ABrickRecto_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ABrickRecto();
	ARKANOID_API UClass* Z_Construct_UClass_ABrick();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void ABrickRecto::StaticRegisterNativesABrickRecto()
	{
	}
	UClass* Z_Construct_UClass_ABrickRecto_NoRegister()
	{
		return ABrickRecto::StaticClass();
	}
	struct Z_Construct_UClass_ABrickRecto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrickRecto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrick,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrickRecto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BrickRecto.h" },
		{ "ModuleRelativePath", "BrickRecto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrickRecto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrickRecto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrickRecto_Statics::ClassParams = {
		&ABrickRecto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABrickRecto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrickRecto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrickRecto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrickRecto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickRecto, 1660951025);
	template<> ARKANOID_API UClass* StaticClass<ABrickRecto>()
	{
		return ABrickRecto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickRecto(Z_Construct_UClass_ABrickRecto, &ABrickRecto::StaticClass, TEXT("/Script/Arkanoid"), TEXT("ABrickRecto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickRecto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
