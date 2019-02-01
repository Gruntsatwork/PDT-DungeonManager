#pragma once
#include <iostream>
#include <string>
#include "HMonster.h"
#ifndef HHero
#define HHero

class Hero
{
private:

	int h_ID;
	std::string h_name;
	int h_level;
	int h_exp;
	int h_hp;
	int h_str;
	int h_dex;
	bool h_dungeon;
	bool h_incombat;
	std::string h_familia;

	friend class boost::serialization::access;
	friend std::ostream & operator<<(std::ostream &os, const Hero &h);

public:
	Hero(int id, std::string name, int level, int exp, int hp, int str, int dex, bool dungeon, bool incombat, std::string familia) : 
		h_ID(id), h_name(name), h_level(level), h_exp(exp), h_hp(hp), h_str(str), h_dex(dex), h_dungeon(dungeon), h_incombat(incombat), h_familia(familia)
	{}

	void printHero()
	{
		std::cout << "ID: " << h_ID << std::endl
			<< "Name: " << h_name << std::endl
			<< "Level: " << h_level << std::endl
			<< "Experience Points: " << h_exp << std::endl
			<< "HP: " << h_hp << std::endl
			<< "Strength: " << h_str << std::endl
			<< "Dexterity: " << h_dex << std::endl
			<< "--------------------------------------------------" << std::endl;
	}
	friend std::ostream& operator<<(std::ostream &out, const Hero &hero)
	{
		std::cout << "ID: " << hero.h_ID << std::endl
			<< "Name: " << hero.h_name << std::endl
			<< "Level: " << hero.h_level << std::endl
			<< "Experience Points: " << hero.h_exp << std::endl
			<< "HP: " << hero.h_hp << std::endl
			<< "Strength: " << hero.h_str << std::endl
			<< "Dexterity: " << hero.h_dex << std::endl
			<< "--------------------------------------------------" << std::endl;
		return out;
	}

	int GetID(Hero &hero)
	{
		return hero.h_ID;
	}

	std::string GetName(Hero &hero)
	{
		return hero.h_name;
	}
	int GetLevel(Hero &hero)
	{
		return hero.h_level;
	}
	int GetXP(Hero &hero)
	{
		return hero.h_exp;
	}
	int GetHP(Hero &hero)
	{
		return hero.h_hp;
	}
	int GetSTR(Hero &hero)
	{
		return hero.h_str;
	}
	int GetDEX(Hero &hero)
	{
		return hero.h_dex;
	}
	bool InDungeon(Hero &hero)
	{
		return hero.h_dungeon;
	}
	bool InCombat(Hero &hero)
	{
		return hero.h_incombat;
	}
	std::string GetFamilia(Hero &hero)
	{
		return hero.h_familia;
	}
};

#endif // !"hero.h"