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
	switch (biome) {
		case 1:
			return "icebattle.png";
		case 2:
			return "junglebattle.png";
		case 3:
			return "desertbattle.png";
		case 4:
			return "ghostbattle.png";
		case 5:
			return "lavabattle.png";
	}
}