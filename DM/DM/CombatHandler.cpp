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
	
	
	


	std::vector< std::vector<int> > VCombatants; // Create a dynamic 2-dimensional array using vector


	for (int i = 0; i < 10; i++) {
		std::vector<int> row; 
		for (int j = 0; j < 2; j++) {
			row.push_back(i*j); }
		VCombatants.push_back(row);
	}
	// Sort by dexterity

	// Flag as ready

	// Fastest Character attacks

	// Flag as unready

	// check if attack hits

	// damage is applied to target

	// check if target has  <0 hp

	// remove from combat if <0 hp

	// 2. fastest attacks

	// damage is applied

	// repeat until all characters are unready

	// iniate round 2

	// change all unready flags to ready

	// repeat 
}