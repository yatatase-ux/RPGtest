#pragma once
#include <memory>

class Player
{
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

	void Attack();
};