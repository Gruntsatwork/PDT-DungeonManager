#include "stdafx.h"
#include <iostream>
#include <string>
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>
#include "CombatHandler.h"
#include "GenerateHero.h"
#include "GenerateMonster.h"


int main()
{
std::string GenHero = "yes";
std::string GenMonster = "yes";

while (GenHero == "yes")
{
	std::cout << "Would you like to generate a hero?" << std::endl;
	std::string GenHero;
	std::cin >> GenHero;

	if (GenHero == "yes")
	{
		GenerateHero();
	}
	else
	{
		std::cout << "Would you like to generate a monster?" << std::endl;
		std::string GenMonster;
		std::cin >> GenMonster;

		if (GenMonster == "yes")
		{
			GenerateMonster();
		}
	}
}

		 

	

return 0;
}
