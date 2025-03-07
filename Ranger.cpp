#include "Ranger.h"
#include <iostream>

Ranger::Ranger() : Character("Ranger")
{
	Accuracy = 5;
	baseHealth = 10;
	Stats[0] = 2;
	Stats[1] = 2;
	Stats[2] = 4;
	Stats[3] = 2;
	Stats[4] = 10;
	Stats[5] = 5;

	Lastfpwrupused = 0;
}
bool Ranger::Ability() {
	Accuracy += 3;

	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip = std::rand() % 2;

	// Output the result
	if (coinFlip == 0) {
		return true;
	}
	else {
		return false;
	}

}
