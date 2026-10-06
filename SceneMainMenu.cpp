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
		int selectEnemyID = -1;

		if(key == One || key == Two|| key == Three || key == Four)
		{
			switch (key)
			{
			case One:
				selectEnemyID = 1;
				break;
			case Two:
				selectEnemyID = 2;
				break;
			case Three:
				selectEnemyID = 3;
				break;
			case Four:
				selectEnemyID = 4;
				break;
			}

			manager->ChangeScene(std::make_unique<SceneInGame>(EnemyFactory::CreateEnemy(selectEnemyID)));

		}

		
	}

	return false;
}

SCENE_EXIT(SceneMainMenu)
{
	std::cout << "Exiting Main Menu Scene" << std::endl;
	std::cout << std::endl;
}