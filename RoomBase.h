#ifndef ROOMBASE_H
#define ROOMBASE_H
#include <iostream>
#include <string>

using namespace std;

class RoomBase {
private:




public:
	bool Completed;
	bool KeyExists;
	int NPC;
	int Book;
	bool BookExists;
	bool Enemy;
	int Biome;
	int Floor;
	int EnemyType;
	RoomBase(const std::string& name) ;
	RoomBase();

	int getEnemy();
	int getBook();
	bool getKey();
	int getBiome();
	int getFloor();
	int getNPC();


};

#endif // ROOMBASE_H
