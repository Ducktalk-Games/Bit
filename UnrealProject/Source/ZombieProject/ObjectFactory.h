// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ObjectFactory.generated.h"

UCLASS()
class ZOMBIEPROJECT_API UObjectFactory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintPure, Category = "Agora Static Functions")
	static UObject* CreateObject(TSubclassOf<UObject> Class, UObject* Owner = nullptr);
};
