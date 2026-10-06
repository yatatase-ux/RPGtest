#include "SceneMainMenu.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneInGame.h"
#include "SceneManager.h"

SCENE_ENTER(SceneMainMenu)
{
	std::cout << "~MainMenu~" << std::endl;
}

SCENE_UPDATE(SceneMainMenu)
{
	if(_kbhit())
	{
		int key = _getch();

		if (key == Space)
		{
			manager->ChangeScene(std::make_unique<SceneInGame>());
		}
	}

	return false;
}

SCENE_EXIT(SceneMainMenu)
{
	std::cout << "Exiting Main Menu Scene" << std::endl;
	std::cout << std::endl;
}