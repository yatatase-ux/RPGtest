#include "Player.h"

Player::Player()
{
	attack[0] = { "‰¡a‚è", 5, 3 };
	attack[1] = { "‰ñ“]a‚è", 12, 10 };
	attack[2] = { "“Ë‚«a‚è", 3, 1 };
	attack[3] = { "U‚è‰º‚ë‚µa‚è", 7, 5 };

	currentMP = maxMP;
	currentHP = maxHP;
}

void Player::Attack(int num)
{
	bool mpOver = false;
	currentMP = (currentMP - attack[num].mp < 0) ? mpOver = true : currentMP - attack[num].mp;
	if (mpOver) return;
}