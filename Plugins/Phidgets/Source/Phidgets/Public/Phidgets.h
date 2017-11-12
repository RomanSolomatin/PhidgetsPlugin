// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModuleManager.h"
#include "phidget22.h"

class FPhidgetsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	/** Handle to the test dll we will load */
	void*	ExampleLibraryHandle;

	int CCONV AttachHandler(PhidgetHandle RFID, void *Ptr)
	{
		int SerialNo;
		return 0;
	}
};