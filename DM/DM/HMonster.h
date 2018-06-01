#pragma once
#include <string>
#include <iostream>
#include "HHero.h"
#ifndef HMonster
#define HMonster

class Monster
{
private:
	std::string m_type;
	int m_level;
	int m_hp;
	int m_str;
	int m_dex;
	bool m_incombat;

public:
	Monster(std::string type, int level, int hp, int str, int dex, bool incombat) : m_type(type), m_level(level), m_hp(hp),m_str(str), m_dex(dex), m_incombat(incombat)
	{}

	void printMonster()
	{
		std::cout << "Monster Type: " << m_type << std::endl
		<< "Monster Level: " << m_level << std::endl
		<< "Monster HP: " << m_hp << std::endl
		<< "Monster Strength: " << m_str << std::endl
		<< "Monster Dexterity: " << m_dex << std::endl
		<< "--------------------------------------------------" << std::endl;
	}

	friend void Monsterdamage(int hero_attack)
	{
		m_hp -= hero_attack;
	}

};

#endif // !HMonster

