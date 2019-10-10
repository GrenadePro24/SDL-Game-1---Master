#pragma once
#include "Module.h"
#include "Globals.h"

class ModuleScene : public Module
{
public:

	ModuleScene();
	~ModuleScene();

	bool Init();
	bool Start();
	update_status PreUpdate();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();

private:
	const Uint8* keyboard = NULL;
};

