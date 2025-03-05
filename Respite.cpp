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