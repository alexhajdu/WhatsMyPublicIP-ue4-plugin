// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ENGINE_MAJOR_VERSION == 5 || ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
#include "Modules/ModuleManager.h"
#else
#include "ModuleManager.h"
#endif

class FWhatsMyPublicIPModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};