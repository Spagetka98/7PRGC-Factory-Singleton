#ifndef TOYDATABASE_H
#define TOYDATABASE_H

#include "Toy.h"
#include <vector>

using namespace std;

class ToyDatabase
{
private:
	vector<Toy*> database;
public:
	~ToyDatabase();
	int getSize();
	void addToy(Toy* newToy);
	void changePricePerUnit(int idOfToy,double price);
	void changeNumberInPackage(int idOfToy,int numberInPackage);
	void removeToyById(int id);
	void showAll();
	void showAllByNameOfToy(string name);
	void showAllWithHigherPrice(double price);
	void showAllWithLowerPrice(double price);
};

#endif

