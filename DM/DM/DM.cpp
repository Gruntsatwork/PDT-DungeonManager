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

	Hero hero(3, "Herotest", temprand , 2, 10, 10, 10, true, true);
	hero.printHero();
	void reseed();

	int temprand2;

	/* generate secret number between 1 and 10: */
	temprand2 = rand() % 5 + 1;

	Dungeon dungeon(1, "DungeonTest", temprand2, temprand2, "Goblin");
	dungeon.printDungeon();
	void reseed();

	int temprand3;

	temprand3 = rand() % 5 + 1;

	Monster monster("Goblin", temprand3, 2, 10, 10, true );
	monster.printMonster();

	int hero_attack = hero.h_str;
	int monster_attack = monster.m_str;

	void Herodamage(monster_attack);
	void Monsterdamage(hero_attack);
	


    return 0;
}

