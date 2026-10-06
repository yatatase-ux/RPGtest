#include "SceneInGame.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneManager.h"
#include "SceneResult.h"

SCENE_ENTER(SceneInGame)
{
	std::cout << "Entering In-Game Scene" << std::endl;
}

SCENE_UPDATE(SceneInGame)
{
	if (_kbhit())
	{
		manager->ChangeScene(std::make_unique<SceneResult>());
	}

	return false;
}

SCENE_EXIT(SceneInGame)
{
	std::cout << "Exiting In-Game Scene" << std::endl;
	std::cout << std::endl;
}
