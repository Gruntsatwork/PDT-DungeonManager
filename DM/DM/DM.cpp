#include "stdafx.h"
#include <iostream>
#include <string>
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>


int main()
{
	int temprand;
	srand(time(NULL));

	/* generate secret number between 1 and 10: */
	temprand = rand() % 5 + 1;

	Hero hero(3, "Herotest", temprand, 2, 10, 10, 10, true, true);
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

	Monster monster("Goblin", temprand3, 2, 10, 10, true);
	monster.printMonster();

	bool Sentthem = false;
	std::string didSent;
	std::vector<int> SentHeros;
	int Sent;

	std::cout << "Would you like to sent forth a hero?" << std::endl;
	std::cin >> didSent;

	if (didSent == "yes")
	{
		bool Sentthem = true;
	}
	



	do {
	std::cout << "Which hero would you like to send forth?" << std::endl;
	std::cout << "Please enter the Hero's ID: " << std::endl;


	std::cin >> Sent;
	SentHeros.push_back(Sent);
	std::cout << "Would you like to sent forth a hero?" << std::endl;
	std::cin >> didSent; }

while (Sentthem == true);

	

return 0;
}
