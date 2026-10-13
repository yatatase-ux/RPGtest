#include "Enemy.h"
#include <iostream>

Enemy::Enemy(const EnemyData& arg_data)
	: data(arg_data)
{

}

const char* Enemy::ElementChar(Element element)
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


void Enemy::ShowData()
{

	std::cout << "ID : " << data.ID << std::endl;

	std::cout << "Name : " << data.Name << std::endl;

	std::cout << "HP : " << data.HP << ", "
		<< "ATK : " << data.ATK << ", "
		<< "DEF : " << data.DEF << ", "
		<< "SPD : " << data.SPD << ", "
		<< "CRI : " << data.CriticalRate << ", "
		<< "Gold : " << data.Gold << ", "
		<< "EXP : " << data.EXP << ", "
		<< std::endl;

	const char* element = ElementChar(data.element);
	std::cout << "Element : " << element << std::endl;
}