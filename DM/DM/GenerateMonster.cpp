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


void GenerateMonster()
{
	int temprand;
	srand(time(NULL)); /* generate secret number between 1 and 10: */
	temprand = rand() % 5 + 1;

	Monster monster( , temprand, temprand, temprand, temprand, true);
	void reseed();
	monster.printMonster();
	std::cout << "Hello 2" << std::endl;
	std::cout << "You created the Monster with the Name: " << monster.GetName(monster) << std::endl;
}