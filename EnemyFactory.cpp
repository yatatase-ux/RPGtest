#include "EnemyFactory.h"
#include "Enemy.h"
#include <iostream>

const EnemyData EnemyFactory::EnemyDataTable[] = {
//   ID,  Name,      HP,ATK,DEF,SPD,CRI,Gold, EXP,     Element
	{ 1, "Slime",	 50,  5,  2,  3,  5,  10,  20, Element::Water },
	{ 2, "Goblin",	 80, 10,  5,  4, 10,  20,  40, Element::Earth },
	{ 3, "Orc",		120, 15,  8,  5, 15,  30,  60, Element::Fire  },
	{ 4, "Dragon",	300, 25, 15,  7, 20, 100, 200, Element::Fire  }
};
const int EnemyFactory::EnemyDataTableSize = sizeof(EnemyFactory::EnemyDataTable) / sizeof(EnemyFactory::EnemyDataTable[0]);

std::unique_ptr<PoolHandle<Enemy>> EnemyFactory::CreateEnemy(int enemyID)
{
	for (int i = 0; i < EnemyDataTableSize; ++i)
	{
		if (EnemyDataTable[i].ID == enemyID)
		{
			// プールから1体借りる（空きがないと例外が飛ぶ）
			PoolHandle<Enemy> handle = Pool().Acquire();

			// 借りた Enemy にデータを設定する
			handle->Init(EnemyDataTable[i]);

			// PoolHandle はコピー禁止なので std::move で渡す
			return std::make_unique<PoolHandle<Enemy>>(std::move(handle));
		}
	}

	// 該当IDなし
	return nullptr;
}

int EnemyFactory::GetEnemyTableSize()
{
	return EnemyDataTableSize;
}

ObjectPool<Enemy>& EnemyFactory::Pool()
{
	static ObjectPool<Enemy> pool(1);
	return pool;
}
