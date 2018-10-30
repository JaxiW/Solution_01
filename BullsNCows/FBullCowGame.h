#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); //Constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	bool CheckGuessValidity(std::string); //TODO Make a better return value
	void Reset();  //TODO Make a better return value
	
//Ignore for now
private:
	//See constructor
	int MyCurrentTry;
	int MyMaxTries;
};