#pragma once
#include "EnemyData.h"

class Enemy;

class EnemyFactory
{
	static const EnemyData EnemyDataTable[];
	static const int EnemyDataTableSize;

public:

	static Enemy* CreateEnemy(int enemyID);

	static int GetEnemyTableSize();
};

