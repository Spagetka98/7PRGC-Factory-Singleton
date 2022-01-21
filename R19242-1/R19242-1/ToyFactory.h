#ifndef TOYFACTORY_H
#define TOYFACTORY_H

#include "Toy.h"

using namespace std;

class ToyFactory
{
public:
	static Toy* createToy(int type,int id, string nameOfToy, string nameOfManufacturer, double price, int modelsInPackage);
};

#endif

