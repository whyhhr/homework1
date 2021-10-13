// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HOMEWORK1_homework1Projectile_generated_h
#error "homework1Projectile.generated.h already included, missing '#pragma once' in homework1Projectile.h"
#endif
#define HOMEWORK1_homework1Projectile_generated_h

#define homework1_Source_homework1_homework1Projectile_h_15_SPARSE_DATA
#define homework1_Source_homework1_homework1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define homework1_Source_homework1_homework1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define homework1_Source_homework1_homework1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAhomework1Projectile(); \
	friend struct Z_Construct_UClass_Ahomework1Projectile_Statics; \
public: \
	DECLARE_CLASS(Ahomework1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/homework1"), NO_API) \
	DECLARE_SERIALIZER(Ahomework1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define homework1_Source_homework1_homework1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAhomework1Projectile(); \
	friend struct Z_Construct_UClass_Ahomework1Projectile_Statics; \
public: \
	DECLARE_CLASS(Ahomework1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/homework1"), NO_API) \
	DECLARE_SERIALIZER(Ahomework1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define homework1_Source_homework1_homework1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ahomework1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ahomework1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ahomework1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ahomework1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ahomework1Projectile(Ahomework1Projectile&&); \
	NO_API Ahomework1Projectile(const Ahomework1Projectile&); \
public:


#define homework1_Source_homework1_homework1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ahomework1Projectile(Ahomework1Projectile&&); \
	NO_API Ahomework1Projectile(const Ahomework1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ahomework1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ahomework1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ahomework1Projectile)


#define homework1_Source_homework1_homework1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(Ahomework1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Ahomework1Projectile, ProjectileMovement); }


#define homework1_Source_homework1_homework1Projectile_h_12_PROLOG
#define homework1_Source_homework1_homework1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	homework1_Source_homework1_homework1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	homework1_Source_homework1_homework1Projectile_h_15_SPARSE_DATA \
	homework1_Source_homework1_homework1Projectile_h_15_RPC_WRAPPERS \
	homework1_Source_homework1_homework1Projectile_h_15_INCLASS \
	homework1_Source_homework1_homework1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define homework1_Source_homework1_homework1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	homework1_Source_homework1_homework1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	homework1_Source_homework1_homework1Projectile_h_15_SPARSE_DATA \
	homework1_Source_homework1_homework1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	homework1_Source_homework1_homework1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	homework1_Source_homework1_homework1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMEWORK1_API UClass* StaticClass<class Ahomework1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID homework1_Source_homework1_homework1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
