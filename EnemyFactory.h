#pragma once
#include "EnemyData.h"

class Enemy;

class EnemyFactory
{
	static const EnemyData EnemyDataTable[];
	static const int EnemyDataTableSize;

	static const char* ElementChar(Element element);

public:

	static Enemy* CreateEnemy(int enemyID);

	static int GetEnemyTableSize();

	static int GetID(EnemyData& enemy) { return enemy.ID; };

	static void ShowEnemyData(int id);
};