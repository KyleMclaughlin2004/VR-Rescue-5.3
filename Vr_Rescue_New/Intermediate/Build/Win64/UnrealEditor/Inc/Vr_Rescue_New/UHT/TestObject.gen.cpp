// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vr_Rescue_New/TestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Vr_Rescue_New();
	VR_RESCUE_NEW_API UClass* Z_Construct_UClass_ATestObject();
	VR_RESCUE_NEW_API UClass* Z_Construct_UClass_ATestObject_NoRegister();
// End Cross Module References
	void ATestObject::StaticRegisterNativesATestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestObject);
	UClass* Z_Construct_UClass_ATestObject_NoRegister()
	{
		return ATestObject::StaticClass();
	}
	struct Z_Construct_UClass_ATestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Vr_Rescue_New,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestObject.h" },
		{ "ModuleRelativePath", "TestObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestObject_Statics::ClassParams = {
		&ATestObject::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestObject()
	{
		if (!Z_Registration_Info_UClass_ATestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestObject.OuterSingleton, Z_Construct_UClass_ATestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestObject.OuterSingleton;
	}
	template<> VR_RESCUE_NEW_API UClass* StaticClass<ATestObject>()
	{
		return ATestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestObject);
	ATestObject::~ATestObject() {}
	struct Z_CompiledInDeferFile_FID_Users_davey_OneDrive_Documents_GitHub_VR_Rescue_5_3_Vr_Rescue_New_Source_Vr_Rescue_New_TestObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davey_OneDrive_Documents_GitHub_VR_Rescue_5_3_Vr_Rescue_New_Source_Vr_Rescue_New_TestObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestObject, ATestObject::StaticClass, TEXT("ATestObject"), &Z_Registration_Info_UClass_ATestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestObject), 2554991106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_davey_OneDrive_Documents_GitHub_VR_Rescue_5_3_Vr_Rescue_New_Source_Vr_Rescue_New_TestObject_h_3851767036(TEXT("/Script/Vr_Rescue_New"),
		Z_CompiledInDeferFile_FID_Users_davey_OneDrive_Documents_GitHub_VR_Rescue_5_3_Vr_Rescue_New_Source_Vr_Rescue_New_TestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_davey_OneDrive_Documents_GitHub_VR_Rescue_5_3_Vr_Rescue_New_Source_Vr_Rescue_New_TestObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
