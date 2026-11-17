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
	Player& player = Player::Instance();
	std::unique_ptr<BattleView> view;

	BattlePhase currentPhase;
	BattlePhase phaseKeep;

	bool isInput = true;

public:

	SceneInGame(PoolHandle<Enemy> e)
		:enemy(std::move(e))
	{
		currentPhase = BattlePhase::SlcCom;
		view = std::make_unique<BattleView>(player);
	}

	SCENE_CLASS(SceneInGame);
};

