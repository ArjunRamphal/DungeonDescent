#include "Shop.h"
#include <iostream>

Shop::Shop() : RoomBase("Shop") {
	int Stock[3];
	std::string StockNames[3] = {"Food","Keys","PlaceHolder"};
	std::srand(std::time(0));
	for (int i; i > 3; i++) {
		Stock[i] = (std::rand() % 5) + 1;
	}

	//NPC = insert
	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip1= std::rand() % 2;

	// Output the result
	if (coinFlip1 == 0) {
		QAvail = true;
	}
	else {
		QAvail = false;
	}

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