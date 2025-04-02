#include "Riddles.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

Riddles::Riddles()
{
	ifstream file("random_riddles_floor_1.txt");
	if (!file) {
		cerr << "Error opening file!\n";
	}

	string line;
	int lineNumber = 0;

	int i = 0;

	while (getline(file, line)) {

		srand(time(0)); // Seed random number generator
		int randomNumber = (rand() % 100) + 1; // Range [1, 100]
		
		//Random index generator for answer position
		randomNum1 = rand() % 3;

		int randomNum2 = randomNum1;
		while (randomNum2 == randomNum1) {
			randomNum2 = rand() % 3;
		}

		int randomNum3 = randomNum2;
		while (randomNum3 == randomNum2) {
			randomNum3 = rand() % 3;
		}

		//index.insert(index.begin() + randomNumber, randomNum1);
		index.push_back(randomNum1);

		vector<string> tempAnswers;

		lineNumber++;
		//riddles.insert(riddles.begin() + randomNumber, line);

		riddles.push_back(line);

		lineNumber++;
		std::getline(file, line);
		
		tempAnswers.push_back(line);
		
		//tempAnswers[randomNumber].insert(randomNum1,line);

		lineNumber++;
		std::getline(file, line);
		
		tempAnswers.push_back(line);

		//tempAnswers[randomNumber].insert(randomNum2, line);

		lineNumber++;
		std::getline(file, line);
		
		tempAnswers.push_back(line);

		//tempAnswers[randomNumber].insert(randomNum3, line);

		//answers.insert(answers.begin() + randomNumber, tempAnswers);

		answers.push_back(tempAnswers);

		i++;
	}
}

vector<string> Riddles::getRiddles()
{
	return riddles;
}

vector<vector<string>> Riddles::getAnswers()
{
	return answers;
}

vector<int> Riddles::getIndex()
{
	return index;
}

void Riddles::randomiseRiddles()
{

}

void Riddles::randomiseAnswers()
{
	randomNum1 = rand() % 3;

	int randomNum2 = randomNum1;
	while (randomNum2 == randomNum1) {
		randomNum2 = rand() % 3;
	}

	int randomNum3 = randomNum2;
	while (randomNum3 == randomNum2) {
		randomNum3 = rand() % 3;
	}

	index.push_back(randomNum1);
}
