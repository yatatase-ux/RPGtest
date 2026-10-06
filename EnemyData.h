#pragma once
#include "Element.h"

struct EnemyData
{
	int ID;
	const char Name[256];
	int HP;
	int ATK;
	int DEF;
	int SPD;
	int CriticalRate;
	int Gold;
	int EXP;
	Element Element;
};