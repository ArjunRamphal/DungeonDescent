#pragma once
#ifndef RIDDLES_H
#define RIDDLES_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Riddles {
private:
	vector<string> riddles;
public:
	
	vector<vector<string>> answers;
	vector<string> answerCorrect;
	int randomNum1;
    Riddles(int floor);
	vector<string> getRiddles();
	vector<vector<string>> getAnswers();
	void randomiseRiddles();
	struct Riddle {
		string answer1;
		string answer2;
		string answer3;
	};
	void randomiseAnswers();
};

#endif // RIDDLES_H
