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
	int temprand;
	srand(time(NULL)); /* generate secret number between 1 and 10: */
	temprand = rand() % 5 + 1;

	Hero hero(g_HeroID, "Herotest", temprand, temprand, temprand, temprand, temprand, true, true);
	void reseed();
	&Hero.printHero;
	std::cout << "Hello" << std::endl;
	g_HeroID++;
}