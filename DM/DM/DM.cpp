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


int main()
{
	std::cout << "Would you like to generate a hero?" << std::endl;
	std::string GenHero;
	std::cin >> GenHero;

	if (GenHero == "yes")
	{
		void GenerateHero();
	}
	void Hero.printHero();

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
	std::cout << SentHeros.back() << std::endl;
	std::cout << "Would you like to start combat?" << std::endl;

	std::string beginCombat;
	std::cin >> beginCombat; 
	
	}

while (Sentthem == true);

	

return 0;
}
