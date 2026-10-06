#include <iostream>
#include "SceneManager.h"
#include "SceneTitle.h"

#include "SceneMainMenu.h"
#include <conio.h>
#include "KeyCord.h"

SCENE_ENTER(SceneTitle)
{
	std::cout << "Kannitekina RPG" << std::endl;
	std::cout << "Any Keyでメインメニューに進む" << std::endl;
}

SCENE_UPDATE(SceneTitle)
{
	if (_kbhit())
	{
		manager->ChangeScene(std::make_unique<SceneMainMenu>());
		return true;
	}

	return false;
}

SCENE_EXIT(SceneTitle)
{
	std::cout << std::endl;
}
