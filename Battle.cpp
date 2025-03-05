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