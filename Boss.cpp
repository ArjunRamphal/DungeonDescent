#include "Boss.h"
#include <iostream>

Boss::Boss() : RoomBase("Boss") {
	

	//NPC = insert
	std::srand(std::time(0));

	// Generate a random value: 0 for Heads, 1 for Tails
	int coinFlip = std::rand() % 2;

	// Output the result
	if (coinFlip == 0) {
		//flip boss type
	}
	else {
		
	}

	baseHealth = 50 + (Floor * 2);


	// Seed the random number generator with the current time
	std::srand(std::time(0));

	// Generate random values between 0 and 20
	for (int i = 0; i < 6; ++i) {
		StatReq[i] = std::rand() % 21; // Generates a number between 0 and 20
	}

	// Print the array
	std::cout << "Generated array: ";
	for (int i = 0; i < 6; ++i) {
		std::cout << StatReq[i] << " ";
	}
}

int Boss::defeat(int Stats[6]) {
	int count = 0;
	for (int i = 0; i < 6; ++i) {
		if (Stats[i] > StatReq[i]) {
			count += 1;
		}
	}

	if (count == 6) {
		return 1;
	}
	else if (count > 0) {
		return 0;
	}
	else {
		return -1;
	}
}