#include "Mage.h"
#include <iostream>

Mage::Mage() : Character("Mage")
{
	baseHealth = 15;
	Stats[0] = 1;
	Stats[1] = 4;
	Stats[2] = 3;
	Stats[3] = 1;
	Stats[4] = 15;
	Stats[5] = 1;

	Lastfpwrupused = 0;
}

void Mage::Ability() {
	for (int i = 0; i < 6; i++) {
		Stats[i] = 2 * Stats[i];
	}
}