#include "BattleView.h"
#include <string>
#include <iostream>

void BattleView::PlayerMove(const MoveInfo move[])
{
	if (move == nullptr)
	{
		std::cout << "NoData" << std::endl;
		return;
	}

	int size = 4;
	std::string txt;
	for (int i = 0; i < size; i++)
	{
		txt += std::string(move[i].name) + "　　";
	}

	std::cout << "技：" << txt << std::endl;
}

void BattleView::Damage(const char* attacker, const char* victim, const char* moveName, int dmg)
{
	std::string atkTxt = std::string(attacker) + "の" + std::string(moveName) + "！";
	std::string dmgTxt = std::string(victim) + "に " + std::to_string(dmg) + " ダメージ！";

	std::cout << atkTxt << std::endl;
	std::cout << dmgTxt << std::endl;
}
