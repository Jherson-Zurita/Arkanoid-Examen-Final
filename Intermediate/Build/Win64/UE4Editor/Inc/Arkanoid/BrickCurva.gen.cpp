// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/BrickCurva.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrickCurva() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ABrickCurva_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ABrickCurva();
	ARKANOID_API UClass* Z_Construct_UClass_ABrick();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void ABrickCurva::StaticRegisterNativesABrickCurva()
	{
	}
	UClass* Z_Construct_UClass_ABrickCurva_NoRegister()
	{
		return ABrickCurva::StaticClass();
	}
	struct Z_Construct_UClass_ABrickCurva_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrickCurva_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrick,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrickCurva_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BrickCurva.h" },
		{ "ModuleRelativePath", "BrickCurva.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrickCurva_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrickCurva>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrickCurva_Statics::ClassParams = {
		&ABrickCurva::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABrickCurva_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrickCurva_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrickCurva()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrickCurva_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickCurva, 681110844);
	template<> ARKANOID_API UClass* StaticClass<ABrickCurva>()
	{
		return ABrickCurva::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickCurva(Z_Construct_UClass_ABrickCurva, &ABrickCurva::StaticClass, TEXT("/Script/Arkanoid"), TEXT("ABrickCurva"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickCurva);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
