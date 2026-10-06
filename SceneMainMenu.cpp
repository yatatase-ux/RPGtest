#include "SceneMainMenu.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneInGame.h"
#include "SceneManager.h"

#include "EnemyFactory.h"

SCENE_ENTER(SceneMainMenu)
{
	std::cout << "~MainMenu~" << std::endl;
	std::cout << "1~4ƒL[‚Å“G‚ð‘I‘ð" << std::endl;
}

SCENE_UPDATE(SceneMainMenu)
{
	if(_kbhit())
	{
		int key = _getch();

		switch(key)
		{
		case One:
			std::cout << "Enemy 1 selected" << std::endl;
			EnemyFactory::CreateEnemy(1);
			manager->ChangeScene(std::make_unique<SceneInGame>());
			return true;
		}

	}

	return false;
}

SCENE_EXIT(SceneMainMenu)
{
	std::cout << "Exiting Main Menu Scene" << std::endl;
	std::cout << std::endl;
}