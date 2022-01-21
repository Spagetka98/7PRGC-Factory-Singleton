#include "InputCheck.h"
#include <iostream>
#include <algorithm>

using namespace std;

int InputCheck::getIntFromUser(string message,string errorMessage)
{
	string userInput;
	cout << message << endl;
	cin >> userInput;

	if (all_of(userInput.begin(), userInput.end(), ::isdigit)) {
		return atoi(userInput.c_str());
	}
	else {
		throw runtime_error(errorMessage);
	}
}

double InputCheck::getDoubleFromUser(string message, string errorMessage)
{
	string userInput;
	cout << message << endl;
	cin >> userInput;

	if (all_of(userInput.begin(), userInput.end(), ::isdigit)) {
		return atof(userInput.c_str());
	}
	else {
		throw runtime_error(errorMessage);
	}
}

string InputCheck::getStringFromUser(string message, string errorMessage)
{
	string userInput;
	cout << message << endl;
	cin >> userInput;

	if (userInput.empty()) {
		throw runtime_error(errorMessage);
	}
	else {
		return userInput;
	}
}
