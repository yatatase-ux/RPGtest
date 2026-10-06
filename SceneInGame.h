#pragma once
#include "SceneBase.h"
#include "Enemy.h"

class SceneInGame : public SceneBase
{
	Enemy* enemy;

public:

	SceneInGame(Enemy* e)
		:enemy(e)
	{}

	SCENE_CLASS(SceneInGame);
};

