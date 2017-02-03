// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "ModuleManager.h"
#include "MySecretClass.h"


// Adding STUFFSERVANT_API fixes a linker error to this class.
class STUFFSERVANT_API FStuffServant : public IModuleInterface
{
public:
	FStuffServant();
	~FStuffServant();
	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	static int getNumber();

	/**
	* Singleton-like access to this module's interface.  This is just for convenience!
	* Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	*
	* @return Returns singleton instance, loading the module on demand if needed
	*/
	static inline FStuffServant& Get()
	{
		return FModuleManager::LoadModuleChecked< FStuffServant >("StuffServant");
	}

	/**
	* Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	*
	* @return True if the module is loaded and ready to use
	*/
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("StuffServant");
	}

	// instanced data
	int x = 5;

	MySecretClass msc;


private:

};

