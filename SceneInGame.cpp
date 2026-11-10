#include "SceneInGame.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneManager.h"
#include "SceneResult.h"
#include "EnemyFactory.h"

SCENE_ENTER(SceneInGame)
{
	std::cout << "ゲームスタート" << std::endl;
}

SCENE_UPDATE(SceneInGame)
{

	switch (currentPhase)
	{
	case BattlePhase::None:
		break;
	case BattlePhase::SlcCom:
	{
		phaseKeep = currentPhase;
		view.PlayerMove(player->GetMove());
		currentPhase = BattlePhase::None;

		break;
	}
	case BattlePhase::CalcDmg:
	

		break;
	case BattlePhase::FaintChk:

		break;
	}

	//if (_kbhit())
	//{
	//	manager->ChangeScene(std::make_unique<SceneResult>());
	//}

	return false;
}

SCENE_EXIT(SceneInGame)
{
	std::cout << "Exiting In-Game Scene" << std::endl;
	std::cout << std::endl;
}
