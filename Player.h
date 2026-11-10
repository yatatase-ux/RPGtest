#pragma once
#include <memory>
#include "MoveInfo.h"

class Player
{
	MoveInfo move[4];
	const int maxMP = 20;
	int currentMP;
	const int maxHP = 50;
	int currentHP;
	Player();

public:

	~Player() {};
	// ÉRÉsÅ[ã÷é~
	Player(const Player&) = delete;
	Player& operator=(const Player&) = delete;

	static Player& Instance()
	{
		static Player instance;
		return instance;
	}

	int GetAttackDamage(int moveNum);
	int GetCurrentMP() { return currentMP; };
	int GetCurrentHP() { return currentHP; };
	const MoveInfo* GetMove() { return move; };
	const char* GetMoveName(int moveNum) { return move[moveNum].name; };
};