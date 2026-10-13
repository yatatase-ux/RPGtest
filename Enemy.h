#pragma once
#include "EnemyData.h"

class Enemy
{
	EnemyData data;
	const char* ElementChar(Element element);

public:

	Enemy() = default;

	explicit Enemy(const EnemyData& arg_data);

	void Init(const EnemyData& arg_data) { data = arg_data; }

	EnemyData GetData() const { return data; }
	void ShowData();
};

