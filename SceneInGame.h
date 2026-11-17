#pragma once
#include "SceneBase.h"
#include "Enemy.h"
#include "Player.h"
#include "ObjectPool.hpp"
#include "BattleView.h"
#include <memory>

enum class BattlePhase
{
	None,
	SlcCom,
	CalcDmg,
	FaintChk
};

class SceneInGame : public SceneBase
{
	PoolHandle<Enemy> enemy;
	Player* player;
	std::unique_ptr<BattleView> view;

	BattlePhase currentPhase;
	BattlePhase phaseKeep;

public:

	SceneInGame(PoolHandle<Enemy> e)
		:enemy(std::move(e))
	{
		player->Instance();
		currentPhase = BattlePhase::SlcCom;
		view = std::make_unique<BattleView>(player->GetMove());
	}

	SCENE_CLASS(SceneInGame);
};

