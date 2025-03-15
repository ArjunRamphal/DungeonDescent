#include "Respite.h"
#include <iostream>

Respite::Respite() : RoomBase("Shop") {
	Regen = 5 * Floor;

	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip = std::rand() % 2;

	// Output the result
	if (coinFlip == 0) {
		KeyExists = true;
	}
	else {
		KeyExists = false;
	}
}

int Respite::Accept(bool acc, int arr[6]) {
	
	if (acc == true) {
		arr[5] += Regen;
	}
	 
	return arr[6];
}

string Respite::getImageFileName(int biome)
{
	switch (biome) {
	case 1:
		return "icerespite.png";
	case 2:
		return "junglerespite.png";
	case 3:
		return "desertrespite.png";
	case 4:
		return "ghostrespite.png";
	case 5:
		return "lavarespite.png";
	}
}
