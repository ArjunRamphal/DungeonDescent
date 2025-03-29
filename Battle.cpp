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

string Battle::getImageFileName(int biome) 
{
	if (biome == 0) {
		return "icebattle.png";
	}
	else if (biome == 1) {
		return "junglebattle.png";
	}
	else if (biome == 2) {
		return "desertbattle.png";
	}
	else if (biome == 3) {
		return "ghostbattle.png";
	}
	else if (biome == 4) {
		return "lavabattle.png";
	}
}

string Battle::getTextFileName(int biome)
{
	if (biome == 0) {
		return "icebattle.txt";
	}
	else if (biome == 1) {
		return "junglebattle.txt";
	}
	else if (biome == 2) {
		return "desertbattle.txt";
	}
	else if (biome == 3) {
		return "ghostbattle.txt";
	}
	else if (biome == 4) {
		return "lavabattle.txt";
	}
}
