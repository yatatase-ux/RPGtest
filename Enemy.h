#pragma once
#include "EnemyData.h"

class Enemy
{
	EnemyData data;

public:

	Enemy(const EnemyData& arg_data);

	EnemyData GetData() const { return data; }
};

