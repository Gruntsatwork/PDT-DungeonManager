#include "stdafx.h"
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>
#include "CombatHandler.h"
#include "GenerateHero.h"
#include "GenerateMonster.h"
#include "GenerateDungeonLevel.h"
#include <cstddef> // NULL
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>




int main()
{

	bool WannaPlay = true;

	while (WannaPlay == true)
	{
		std::cout << "Would you like to generate a Hero, a Monster or a Dungeon?" << std::endl;
		std::string GenWhich;
		std::cin >> GenWhich;

		if (GenWhich == "Hero")
		{
			GenerateHero();
		}
		else if (GenWhich == "Monster")
		{
			{
				GenerateMonster();
			}
		}
		else if (GenWhich == "Dungeon")
		{
			GenerateDungeonLevel();
		}
		//else if (GenWhich == "FindHero")
		//{
		//	FindHero();
		//}
		//else if (GenWhich == "ListHero")
		//{
		//	ListHero();
		//}
		//else if (GenWhich == "ListMonster")
		//{
		//	ListMonster();
		//}
		//else if (GenWhich == "FindMonster")
		//{
		//	FindMonster();
		/*}*/
		//else if (GenWhich == "Save")
		//{
		//	MakeSave();
		//}
		else if (GenWhich == "Load")
		{
			LoadHero();
		}
		else if (GenWhich == "Stop")
		{
		WannaPlay = false;
		}
		else
		{
		WannaPlay = false;
	}
}

return 0;
}
