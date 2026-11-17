#pragma once
#include "MoveInfo.h"

class Player;

class BattleView
{

public:

	void PlayerMove(Player& player);

	void Damage(const char* attacker, const char* victim, const char* moveName, int dmg);

};