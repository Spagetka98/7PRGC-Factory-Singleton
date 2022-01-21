#include "PlaneRC.h"
#include <stdexcept>
#include <iostream>

PlaneRC::PlaneRC(int id, string nameOfToy, string nameOfManufacturer, double price, int modelsInPackage) : Toy(id, nameOfToy, nameOfManufacturer, price, modelsInPackage)
{
    
}

PlaneRC::~PlaneRC()
{
}

void PlaneRC::showInformation()
{
    cout << "PlaneRC s ID: " << this->getId() << " JMENO: " << this->getNameOfToy() << " VYROBCE: "<< this->getNameOfManufacturer()<< " CENA: "<< this->getPrice() << " POCET V BALENI: "<< this->getModelsInPackage() << " CELKOVA CENA: " << this->countTotalPrize() << endl;
}

double PlaneRC::countTotalPrize()
{
    return getPrice() * getModelsInPackage() * 1.25;
}
