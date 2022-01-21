#include "CarRC.h"
#include <iostream>

using namespace std;

CarRC::CarRC(int id, string nameOfToy, string nameOfManufacturer, double price, int modelsInPackage) : Toy(id, nameOfToy,nameOfManufacturer, price,modelsInPackage)
{

}

CarRC::~CarRC()
{
}

void CarRC::showInformation()
{
	cout << "CarRC s ID: " << this->getId() << " JMENO: " << this->getNameOfToy() << " VYROBCE: " << this->getNameOfManufacturer() << " CENA: " << this->getPrice() << " POCET V BALENI: " << this->getModelsInPackage() << " CELKOVA CENA: "<< this->countTotalPrize() << endl;
}

double CarRC::countTotalPrize()
{
	return getModelsInPackage() * getPrice() * 1.15;
}
