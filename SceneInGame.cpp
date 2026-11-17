#include "SceneInGame.h"
#include <iostream>
#include <conio.h>
#include "KeyCord.h"
#include "SceneManager.h"
#include "SceneResult.h"
#include "EnemyFactory.h"

SCENE_ENTER(SceneInGame)
{
	std::cout << "ƒQ[ƒ€ƒXƒ^[ƒg" << std::endl;
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
		view->PlayerMove();
		int moveNum;
		std::cout << "‹Z”Ô†F";
		std::cin >> moveNum;
		std::cout << std::endl;

		if (_kbhit())
		{
			int key = _getch();
			int selectEnemyID = -1;

			if (key == Enter)
			{
				isInput = true;

				if (moveNum > 4)
				{

				}

				// ---- UŒ‚ˆ— ----
				player.GetAttackDamage(moveNum - 1);

			}


		}

		break;
	}
	case BattlePhase::CalcDmg:
	

		break;
	case BattlePhase::FaintChk:

		break;
	}

	if (_kbhit())
	{
		manager->ChangeScene(std::make_unique<SceneResult>());
	}

	if (isInput)
	{
		switch (currentPhase)
		{
		case BattlePhase::None:
			break;
		case BattlePhase::SlcCom:
		{
			currentPhase = BattlePhase::None;

			break;
		}
		case BattlePhase::CalcDmg:


			break;
		case BattlePhase::FaintChk:

			break;
		}

		isInput = false;
	}

	return false;
}

SCENE_EXIT(SceneInGame)
{
	std::cout << "Exiting In-Game Scene" << std::endl;
	std::cout << std::endl;
}
