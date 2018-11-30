#pragma once
#include <string>
#include <iostream>
#include "HHero.h"
#ifndef HMonster
#define HMonster
#include <vector>

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

	friend std::ostream& operator<< (std::ostream &out, const Monster &monster)
	{
		std::cout << "Monster Type: " << monster.m_type << std::endl
			<< "Monster Level: " << monster.m_level << std::endl
			<< "Monster HP: " << monster.m_hp << std::endl
			<< "Monster Strength: " << monster.m_str << std::endl
			<< "Monster Dexterity: " << monster.m_dex << std::endl
			<< "--------------------------------------------------" << std::endl;

		return out;
	}

	std::string GetName(Monster &monster)
	{
		return monster.m_type;
	}
	int GetLevel(Monster &monster)
	{
		return monster.m_level;
	}
	int GetHP(Monster &monster)
	{
		return monster.m_hp;
	}
	int GetSTR(Monster &monster)
	{
		return monster.m_str;
	}
	int GetDEX(Monster &monster)
	{
		return monster.m_dex;
	}
	bool InCombat(Monster &monster)
	{
		return monster.m_incombat;
	}
};



#endif // !HMonster

