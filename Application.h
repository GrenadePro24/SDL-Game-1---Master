#pragma once

#include<list>
#include "Globals.h"
#include "Module.h"

class ModuleRender;
class ModuleWindow;
class ModuleTextures;
class ModuleScene;
class ModuleInput;

class Application
{
public:

	Application();
	~Application();

	bool Init();
	bool Start();
	update_status PreUpdate();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();

public:
	ModuleRender* renderer;
	ModuleWindow* window;
	ModuleTextures* textures;
	ModuleScene* scenes;
	ModuleInput* input;

private:

	std::list<Module*> modules;

};

extern Application* App;