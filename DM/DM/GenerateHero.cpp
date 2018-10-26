#include "stdafx.h"
#include <iostream>
#include <string>
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>
#include "GenerateHero.h"

int g_HeroID = 0;

void GenerateHero()
{
	int temprand1, temprand2, temprand3, temprand4, temprand5;

	srand(time(NULL)); /* generate secret number between 1 and 10: */
	temprand1 = rand() % 5 + 1;
	temprand2 = rand() % 5 + 1;
	temprand3 = rand() % 5 + 1;
	temprand4 = rand() % 5 + 1;
	temprand5 = rand() % 5 + 1;

	Hero hero(g_HeroID, "Herotest", temprand1, temprand2, temprand3, temprand4, temprand5, true, true);
	void reseed();
	hero.printHero();
	std::cout << "Hello" << std::endl;
	std::cout << "You created the Hero with ID " << hero.GetID(hero) << std::endl;
	g_HeroID++;
}