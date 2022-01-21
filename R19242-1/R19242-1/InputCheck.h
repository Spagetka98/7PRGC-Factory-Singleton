#pragma once
#include <string>

using namespace std;

class InputCheck
{
public:
	static int getIntFromUser(string message,string errorMessage);
	static double getDoubleFromUser(string message,string errorMessage);
	static string getStringFromUser(string message, string errorMessage);
};

