#include "Globals.h"
#include "Application.h"
#include "ModuleScene.h"
#include "SDL/include/SDL.h"

ModuleScene::ModuleScene()
{
}

// Destructor
ModuleScene::~ModuleScene()
{}

// Called before render is available
bool ModuleScene::Init()
{
	LOG("Todo");
	bool ret = true;
	
	return ret;
}

// Called on frame zero
bool ModuleScene::Start()
{
	LOG("Todo");
	bool ret = true;
	
	return ret;
}

// Called every draw update
update_status ModuleScene::PreUpdate()
{
	return UPDATE_CONTINUE;
}

update_status ModuleScene::Update()
{
	return UPDATE_CONTINUE;
}

update_status ModuleScene::PostUpdate()
{
	return UPDATE_CONTINUE;
}

// Called before quitting
bool ModuleScene::CleanUp()
{
	LOG("Todo");

	return true;
}