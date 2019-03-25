#include "stdafx.h"
#include "HHero.h"
#include "HDungeon.h"
#include "HMonster.h"
#include <cstdlib>
#include <time.h>
#include <vector>
#include "GenerateHero.h"
#include <cstddef> // NULL
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


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
	std::ofstream file_obj;
	file_obj.open("Save.txt");
	file_obj << g_HeroID << '\n' << HName << '\n' << temprand1 << '\n' << temprand2 << '\n' << temprand3 << '\n' << temprand4 << '\n' << temprand5 << '\n' << "true" << '\n' << "true" << '\n' << Familia << '\n';
	void reseed();
	Heroes.push_back(hero);
	hero.printHero();
	std::cout << "Hello" << std::endl;
	std::cout << "You created the Hero with ID " << hero.GetID(hero) << " from the " << hero.GetFamilia(hero) << " Family" << std::endl;

}

void LoadHero()
{
	int temprand1, temprand2, temprand3, temprand4, temprand5;
	std::string HName;
	std::string Familia;
	std::string save;

	std::ifstream file_obj("Save.txt");
	while (file_obj);
	{
		std::getline(file_obj, save);
		std::stringstream sst(save);
		sst >> g_HeroID;
		std::getline(file_obj, HName);
		std::getline(file_obj, save);
		std::stringstream s1(save);
		s1 >> temprand1;
		std::getline(file_obj,save);
		std::stringstream s2(save);
		s2 >> temprand2;
		std::getline(file_obj, save);
		std::stringstream s3(save);
		s3 >> temprand3;
		std::getline(file_obj, save);
		std::stringstream s4(save);
		s4 >> temprand4;
		std::getline(file_obj, save);
		std::stringstream s5(save);
		s5 >> temprand5;
		std::getline(file_obj, Familia);
	}
	Hero hero(g_HeroID, HName, temprand1, temprand2, temprand3, temprand4, temprand5, true, true, Familia);
}

//void ListHero()
//{
//	std::cout << "You have the following heroes to choose from: " << std::endl;
//	for (auto n : Heroes)
//		std::cout << n << ' ';
//	std::cout << std::endl;
//
//}

//void FindHero()
//{
//	std::cout << "Which Hero would you like to find?" << std::endl;
//	std::string WhichHero;
//	std::cin >> WhichHero;
//	for (auto n : Heroes)
//		if (n.GetName(n) == WhichHero)
//		{
//			std::cout << n << ' ';
//		}
//	std::cout << std::endl;
//}

void DeleteSave()
{
	remove("Save.txt");
}

//void MakeSave()
//{
//	// create and open a character archive for output
//	std::ofstream ofs("Save");
//
//	// save data to archive
//	{
//		boost::archive::text_oarchive oa(ofs);
//		// write class instance to archive
//		oa << Heroes;
//		// archive and stream closed when destructors are called
//	}
//}

//int Hero::save()
//{
//	std::ofstream file_obj;
//
//	file_obj.open("Save.tx", std::ios::app);
//
//	Hero hero;
//
//
//
//}

//// void ReadSave()
//	{// ... some time later restore the class instance to its orginal state
//	
//		{
//			// create and open an archive for input
//			std::ifstream ifs("Save");
//			boost::archive::text_iarchive ia(ifs);
//			// read class state from archive
//			ia >> Heroes;
//			// archive and stream closed when destructors are called
//		}
//	}

//void usesave(std::vector<hero>&heroes)
//{
//	int load0;
//	std::string load1;
//	int load2;
//	int load3;
//	int load4;
//	int load5;
//	int load6;
//	bool load7;
//	bool load8;
//	std::string load9;
//
//	for (auto i : heroes)
//	{
//		loadi = i;
//	}
//
//	g_heroid++;
//	hero hero(g_heroid, loadedname, loadedlevel, loadedexp, loadedhp, loadedstr, loadeddex, true, true, loadedfamilia);
//	heroes.push_back(hero);
//}