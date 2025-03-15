#include "Chest.h"
#include <iostream>

Chest::Chest() : RoomBase("Chest") {

	//NPC = insert
	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip1 = std::rand() % 2;

	// Output the result
	if (coinFlip1 == 0) {
		Enemy = true;
	}
	else {
		Enemy = false;
	}

	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip = std::rand() % 2;

	// Output the result
	if (coinFlip == 0) {
		Locked = true;
	}
	else {
		Locked = false;
	}

}

void Chest::Open() {
	//to code effects and gain
}

string Chest::getImageFileName(int biome)
{
	switch (biome) {
	case 1:
		return "icechest.png";
	case 2:
		return "junglechest.png";
	case 3:
		return "desertchest.png";
	case 4:
		return "ghostchest.png";
	case 5:
		return "lavachest.png";
	}
}
