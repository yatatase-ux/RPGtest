#include "SceneStartup.h"
#include "SceneTitle.h"
#include <iostream>
#include "SceneManager.h"

SCENE_ENTER(SceneStartup)
{
	std::cout << "Startup Now..." << std::endl;
}

SCENE_UPDATE(SceneStartup)
{
	manager->ChangeScene(std::make_unique<SceneTitle>());
	return true;
}

SCENE_EXIT(SceneStartup)
{
	std::cout << "Finished Startup" << std::endl;
	std::cout << std::endl;
}
