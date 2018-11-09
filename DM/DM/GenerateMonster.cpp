#include "stdafx.h"
#include <iostream>
#include <string>
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>
#include "GenerateMonster.h"
#include "GenerateDungeonLevel.h"




void GenerateMonster()
{
	int temprand1, temprand2, temprand3, temprand4;

	srand(time(NULL)); /* generate secret number between 1 and 10: */
	temprand1 = rand() % 4 + 1;
	temprand1 = rand() % 5 + 1;
	temprand2 = rand() % 5 + 1;
	temprand3 = rand() % 5 + 1;
	temprand4 = rand() % 5 + 1;


	std::vector<std::string> MonsterType = { "Goblin", "Orc", "Minotaur", "Dragon" };
	std::string MType = MonsterType.at(rand() % 3 + 1);

	Monster monster(MType, temprand1, temprand2, temprand3, temprand4, true);
	void reseed();
	monster.printMonster();
	std::cout << "Hello 2" << std::endl;
	std::cout << "You created the Monster with the Name: " << monster.GetName(monster) << std::endl;
}