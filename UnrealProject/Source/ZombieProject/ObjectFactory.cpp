// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectFactory.h"

UObject* UObjectFactory::CreateObject(TSubclassOf<UObject> Class, UObject* Owner /*= nullptr*/)
{
	return NewObject<UObject>(Owner == nullptr ? (UObject*)GetTransientPackage() : Owner, Class);
}