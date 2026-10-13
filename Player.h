#pragma once
#include <memory>

struct AttackInfo
{
	const char* name;
	int power;
	int mp;
};

class Player
{
	AttackInfo attack[4];
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

	int Attack(int num);
};