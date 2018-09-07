#pragma once
#include <iostream>
#include <string>
#include "HMonster.h"
#ifndef HHero
#define HHero

class Hero
{
private:

	const int h_ID;
	const std::string h_name;
	int h_level;
	int h_exp;
	int h_hp;
	int h_str;
	int h_dex;
	bool h_dungeon;
	bool h_incombat;

public:
	Hero(int id, std::string name, int level, int exp, int hp, int str, int dex, bool dungeon, bool incombat) : 
		h_ID(id), h_name(name), h_level(level), h_exp(exp), h_hp(hp), h_str(str), h_dex(dex), h_dungeon(dungeon), h_incombat(incombat)
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

};

#endif // !"hero.h"