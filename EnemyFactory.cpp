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

Enemy* EnemyFactory::CreateEnemy(int enemyID)
{
	for (int i = 0; i < EnemyDataTableSize; ++i)
	{
		if (EnemyDataTable[i].ID == enemyID)
		{
			return new Enemy(EnemyDataTable[i]);
		}
	}
	return nullptr;
}

int EnemyFactory::GetEnemyTableSize()
{
	return EnemyDataTableSize;
}

const char* EnemyFactory::ElementChar(Element element)
{
	switch (element)
	{
	case Element::None:
		return "None";
	case Element::Fire:
		return "Fire";
	case Element::Water:
		return "Water";
	case Element::Light:
		return "Light";
	case Element::Dark:
		return "Dark";
	case Element::Earth:
		return "Earth";
	case Element::Wind:
		return "Wind";
	}
}

void EnemyFactory::ShowEnemyData(int id)
{
	if (id < 1) return;
	int index = id - 1;

	std::cout << "ID : " <<  EnemyDataTable[index].ID << std::endl;

	std::cout << "Name : " << EnemyDataTable[index].Name << std::endl;

	std::cout << "HP : " << EnemyDataTable[index].HP << ", "
		<< "ATK : " << EnemyDataTable[index].ATK << ", "
		<< "DEF : " << EnemyDataTable[index].DEF << ", "
		<< "SPD : " << EnemyDataTable[index].SPD << ", "
		<< "CRI : " << EnemyDataTable[index].CriticalRate << ", "
		<< "Gold : " << EnemyDataTable[index].Gold << ", "
		<< "EXP : " << EnemyDataTable[index].EXP << ", "
		<< std::endl;

	const char* element = ElementChar(EnemyDataTable[index].Element);
	std::cout << "Element : " << element << std::endl;
}