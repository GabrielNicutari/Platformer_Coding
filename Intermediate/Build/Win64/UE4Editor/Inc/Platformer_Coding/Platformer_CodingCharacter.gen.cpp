// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Platformer_CodingCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformer_CodingCharacter() {}
// Cross Module References
	PLATFORMER_CODING_API UClass* Z_Construct_UClass_APlatformer_CodingCharacter_NoRegister();
	PLATFORMER_CODING_API UClass* Z_Construct_UClass_APlatformer_CodingCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Platformer_Coding();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlatformer_CodingCharacter::StaticRegisterNativesAPlatformer_CodingCharacter()
	{
	}
	UClass* Z_Construct_UClass_APlatformer_CodingCharacter_NoRegister()
	{
		return APlatformer_CodingCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_APlatformer_CodingCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Platformer_Coding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Platformer_CodingCharacter.h" },
				{ "ModuleRelativePath", "Platformer_CodingCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Platformer_CodingCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera beside the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APlatformer_CodingCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Platformer_CodingCharacter.h" },
				{ "ToolTip", "Side view camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SideViewCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APlatformer_CodingCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_SideViewCameraComponent_MetaData, ARRAY_COUNT(NewProp_SideViewCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SideViewCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlatformer_CodingCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlatformer_CodingCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformer_CodingCharacter, 2294845083);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformer_CodingCharacter(Z_Construct_UClass_APlatformer_CodingCharacter, &APlatformer_CodingCharacter::StaticClass, TEXT("/Script/Platformer_Coding"), TEXT("APlatformer_CodingCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformer_CodingCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
