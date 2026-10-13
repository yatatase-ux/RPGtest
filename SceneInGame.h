#pragma once
#include "SceneBase.h"
#include "Enemy.h"
#include "ObjectPool.hpp"

class SceneInGame : public SceneBase
{
//	Enemy* enemy;

	PoolHandle<Enemy> enemy;

public:

	SceneInGame(PoolHandle<Enemy> e)
		:enemy(std::move(e))
	{}

	SCENE_CLASS(SceneInGame);
};

