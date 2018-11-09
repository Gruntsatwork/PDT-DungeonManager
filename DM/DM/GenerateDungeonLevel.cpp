#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>
#include "GenerateDungeonLevel.h"

using namespace std;


int g_DungeonID = 0;

void GenerateDungeonLevel()
{
	int temprand1, temprand2;

		srand(time(NULL)); /* generate secret number between 1 and 10: */
	temprand1 = rand() % 5 + 1;
	temprand2 = rand() % 5 + 1;



	std::vector<std::string> LevelName = { "Creepy Caves", "Lava Pit", "Catacombs", "Underwater Labyrinth", "Goblin Warren", "Safezone" };
	std::string DLevel = LevelName.at(rand() % 5 + 1);

	std::vector<std::string> MonsterType = { "Goblin", "Orc", "Minotaur", "Dragon" };
	std::string MType = MonsterType.at(rand() % 3 + 1);


	Dungeon dungeon(g_DungeonID, DLevel, temprand1, temprand2, MType);
	void reseed();
	dungeon.printDungeon();
	std::cout << "Hello" << std::endl;
	std::cout << "You created the " << DLevel << " with ID " << dungeon.GetID(dungeon) << " filled with " << dungeon.GetNrMonsters(dungeon) << " " << dungeon.GetTypeofMonster(dungeon) << "." << std::endl;
	g_DungeonID++;

}