#include "Player.h"

Player::Player()
{
	move[0] = { "‰¡a‚è", 5, 3 };
	move[1] = { "‰ñ“]a‚è", 12, 10 };
	move[2] = { "“Ë‚«a‚è", 3, 1 };
	move[3] = { "U‚è‰º‚ë‚µa‚è", 7, 5 };

	currentMP = maxMP;
	currentHP = maxHP;
}

int Player::GetAttackDamage(int moveNum)
{
	bool mpOver = false;
	currentMP = (currentMP - move[moveNum].mp < 0) ? mpOver = true : currentMP - move[moveNum].mp;
	if (mpOver) return -1;

	return move[moveNum].power;
}