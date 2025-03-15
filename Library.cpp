#include "Library.h"
#include <iostream>

Library::Library() : RoomBase("Library") {
	
	BookExists = true;
	//Book type to be coded
	//NPC = insert
	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip = std::rand() % 2;

	// Output the result
	if (coinFlip == 0) {
		QAvail = true;
		QComp = false;
	}
	else {
		QAvail = false;
		QComp = true;
	}

	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip1 = std::rand() % 2;

	// Output the result
	if (coinFlip1 == 0) {
		KeyExists = true;
	}
	else {
		KeyExists = false;
	}

}

int Library::BookEff(int Type, int arr[6]) {

	//to code type effects

	return arr[6];
}

string Library::getImageFileName(int biome)
{
	switch (biome) {
	case 1:
		return "icelibrary.png";
	case 2:
		return "junglelibrary.png";
	case 3:
		return "desertlibrary.png";
	case 4:
		return "ghostlibrary.png";
	case 5:
		return "lavalibrary.png";
	}
}
