#pragma once
#include "EnemyData.h"
#include "ObjectPool.hpp"
#include <memory>

class Enemy;

class EnemyFactory
{
	static const EnemyData EnemyDataTable[];
	static const int EnemyDataTableSize;

public:

	static std::unique_ptr<PoolHandle<Enemy>> CreateEnemy(int enemyID);

	static int GetEnemyTableSize();

	static int GetID(const EnemyData& enemy) { return enemy.ID; };

	static ObjectPool<Enemy>& Pool();
};