#pragma once
#include "MoveInfo.h"

class BattleView
{

public:

	void PlayerMove(const MoveInfo move[]);

	void Damage(const char* attacker, const char* victim, const char* moveName, int dmg);

};