#pragma once
#include "MoveInfo.h"

class Player;

class BattleView
{

	Player& player;

public:

	BattleView(Player& p);

	void PlayerMove();

	void Damage(const char* attacker, const char* victim, const char* moveName, int dmg);

};