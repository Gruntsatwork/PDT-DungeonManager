#include "stdafx.h"
#include <iostream>
#include <string>
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>


int main()
{
	int temprand;
	srand(time(NULL));

	/* generate secret number between 1 and 10: */
	temprand = rand() % 5 + 1;

	Hero hero(3, "Herotest", temprand , 2, 10, 10, 10);
	hero.printHero();

	int temprand2;
	srand(time(NULL));

	/* generate secret number between 1 and 10: */
	temprand2 = rand() % 5 + 1;

	Dungeon dungeon(1, "DungeonTest", temprand2, temprand2, "Goblin");
	dungeon.printDungeon();


	Monster monster("Goblin", 1, 10, 5, 5);
	monster.printMonster();

	bool Enemy = true;

	if (monster.monster_hp < 1)
		bool Enemy = false;
	else
		bool Enemy = true;

	std::cout << std::boolalpha << "There are enemies!" << Enemy << std::endl;

    return 0;
}

