#include "SceneInGame.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneManager.h"
#include "SceneResult.h"
#include "EnemyFactory.h"

SCENE_ENTER(SceneInGame)
{
	std::cout << "Show the Enemy State" << std::endl;
	int enemyID = enemy->GetData().ID;
	EnemyFactory::ShowEnemyData(enemyID);
	std::cout << "Any Key‚Åi‚Þ" << std::endl;
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
