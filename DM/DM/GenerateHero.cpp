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
#include "GenerateHero.h"
#include "boost/archive/text_oarchive.hpp"
#include "boost/archive/text_iarchive.hpp""

using namespace std;

std::vector<Hero>Heroes;
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

	std::vector<std::string> HeroName = { "Adam", "Bernd", "Christian", "David", "Emil", "Ferdinand" };
	std::string HName = HeroName.at(rand() % 5 + 1);

	std::vector<std::string> FamName = { "Loki", "Freya", "Zeus", "Hera", "Hestia", "Take" };
	std::string Familia = FamName.at(rand() % 5 + 1);

	g_HeroID++;
	Hero hero(g_HeroID, HName, temprand1, temprand2, temprand3, temprand4, temprand5, true, true, Familia);
	void reseed();
	Heroes.push_back(hero);
	ofstream file;
	file.open("Save.txt", std::ios_base::app);
	file << hero.GetID(hero) << hero.GetName(hero) << hero.GetLevel(hero) << hero.GetXP(hero) << hero.GetHP(hero) << hero.GetSTR(hero) << hero.GetDEX(hero) << endl;
	file.close();
	hero.printHero();
	std::cout << "Hello" << std::endl;
	std::cout << "You created the Hero with ID " << hero.GetID(hero) << " from the " << hero.GetFamilia(hero) << " Family" << std::endl;

}

void ListHero()
{
	int iterator = 0;
	std::cout << "You have the following heroes to choose from: " << endl;
	for (auto n : Heroes)
		std::cout << n << ' ';
	std::cout << endl;

}

void FindHero()
{
	std::cout << "Which Hero would you like to find?" << std::endl;
	std::string WhichHero;
	std::cin >> WhichHero;
	for (auto n : Heroes)
		if (n.GetName(n) == WhichHero)
		{
			std::cout << n << ' ';
		}
	std::cout << endl;
}

void DeleteSave()
{
	remove("Save.txt");
}

void ReadSave()
{
	int ID;
	std::string name;
	int level, exp, hp, strength, dexterity;
	std::string familia;

	std::ifstream file("Save.txt");
	if (file.is_open()) {
		int it;
		
		

		file.close();
	}
}

void LoadHeroes(int, std::string, int, int, int, int, int, std::string)
{
	int ID;
	std::string name;
	int level, exp, hp, strength, dexterity;
	std::string familia;
	Hero hero(ID, name, level, exp, hp, strength, dexterity, true, true, familia);
	Heroes.push_back(hero);
}