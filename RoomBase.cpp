#include "RoomBase.h"
#include <iostream>

RoomBase::RoomBase(const std::string& name) {
	
}

RoomBase::RoomBase() {

}

int RoomBase::getBiome() {
	return Biome;
}

int RoomBase::getEnemy() {
	if (Enemy == true) {
		return EnemyType;
	}
	else {
		return 0;
	}
}

int RoomBase::getBook() {
	if (BookExists == true) {
		return Book;
	}
	else {
		return 0;
	}
}

bool RoomBase::getKey() {
	return KeyExists;
}

int RoomBase::getFloor() {
	return Floor;
}

int RoomBase::getNPC() {
	return NPC;
}