#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>

#ifndef HDungeon
#define HDungeon

class Dungeon
{
private:
	int d_ID;
	std::string d_name;
	int d_Level;
	int d_nrmonsters;
	std::string d_typeofmonster;

public:
	Dungeon (int id, std::string name, int level, int nrmonsters, std::string typeofmonster) : d_ID(id), d_name(name), d_Level(level), d_nrmonsters(nrmonsters), d_typeofmonster(typeofmonster)
	{}

	void printDungeon()
	{
		std::cout << "Dungeon ID: " << d_ID << std::endl
			<< "Dungeon Name: " << d_name << std::endl
			<< "Dungeon Level: " << d_Level << std::endl
			<< "Number of Monsters: " << d_nrmonsters << std::endl
			<< "Type of Monster: " << d_typeofmonster << std::endl
			<< "--------------------------------------------------" << std::endl;
	}

	int GetID(Dungeon &dungeon)
	{
		return dungeon.d_ID;
	}

	std::string GetName(Dungeon &dungeon)
	{
		return dungeon.d_name;
	}
	int GetLevel(Dungeon &dungeon)
	{
		return dungeon.d_Level;
	}
	int GetNrMonsters(Dungeon &dungeon)
	{
		return dungeon.d_nrmonsters;
	}
	std::string GetTypeofMonster(Dungeon &dungeon)
	{
		return dungeon.d_typeofmonster;
	}

};
#endif // !HDungeon
