#include "SceneResult.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneManager.h"
#include "SceneTitle.h"


SCENE_ENTER(SceneResult)
{
	std::cout << "Entering Result Scene" << std::endl;
}

SCENE_UPDATE(SceneResult)
{
	if (_kbhit())
	{
		int key = _getch();
		if (key == Space)
		{
			manager->ChangeScene(std::make_unique<SceneTitle>());
		}
	}

	return false;
}

SCENE_EXIT(SceneResult)
{
	std::cout << "Exiting Result Scene" << std::endl;
	std::cout << std::endl;
}