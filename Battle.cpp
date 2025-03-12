#include "Battle.h"
#include <iostream>

Battle::Battle() : RoomBase("Battle") {
	
	Enemy = true;
	//code enemy gen

	eDefeated = false;

	StatChange = Floor;

}

void Battle::Effect(int arr[6]) {


	std::srand(std::time(0));

	// Generate three random numbers
	for (int i = 0; i < Floor; ++i) {
		arr[std::rand()] -= Floor;
	}
}

string Battle::getimageFileName(int biome) {
	if (biome == 1) {
		return "icebattle.png";
	}
	else if (biome == 2) {
		return "jungle";
	}
	else if (biome == 3) {
		return "desert";
	}
	else if (biome == 4) {
		return "ghost";
	}
	else if (biome == 5) {
		return "lava";
	}
}