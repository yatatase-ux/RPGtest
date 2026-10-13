#pragma once
#include "Element.h"

struct EnemyData
{
	int ID;
	const char* Name;
	int HP;
	int ATK;
	int DEF;
	int SPD;
	int CriticalRate;
	int Gold;
	int EXP;
	Element element;
};

