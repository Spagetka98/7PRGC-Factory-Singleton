#include "ToyDatabase.h"
#include <iostream>

ToyDatabase::~ToyDatabase()
{
    for (int i = 0; i < database.size(); i++) {
        Toy* ptr = database[i];
        delete ptr;
    }

}

int ToyDatabase::getSize()
{
    return this->database.size();
}

void ToyDatabase::addToy(Toy* newToy)
{
    this->database.push_back(newToy);
}

void ToyDatabase::changePricePerUnit(int idOfToy,double price)
{
    int foundId = -1;

    for (int i = 0; i < database.size(); i++) {
        if (database[i]->getId() == idOfToy) {
            foundId = database[i]->getId();
            database[i]->setPrice(price);
            break;
        }
    }

    if (foundId < 0) {
        cout << "Nepodarilo se najit Toy s id:"<< idOfToy << endl;
    }
}

void ToyDatabase::changeNumberInPackage(int idOfToy,int numberInPackage)
{
    int foundId = -1;

    for (int i = 0; i < database.size(); i++) {
        if (database[i]->getId() == idOfToy) {
            foundId = database[i]->getId();
            database[i]->setModelsInPackage(numberInPackage);
            break;
        }
    }

    if (foundId < 0) {
        cout << "Nepodarilo se najit Toy s id:" << idOfToy << endl;
    }
}

void ToyDatabase::removeToyById(int id)
{
    for (int i = 0; i < database.size(); i++) {
        if (database[i]->getId() == id) {
            Toy* toy = database[i];
            database.erase(remove(database.begin(), database.end(), toy), database.end());
            delete toy;
            break;
        }
    }
}

void ToyDatabase::showAll()
{
    for (int i = 0; i < database.size(); i++) {
        database[i]->showInformation();
    }
}

void ToyDatabase::showAllByNameOfToy(string name)
{
    for (int i = 0; i < database.size(); i++) {
        size_t found = database[i]->getNameOfToy().find(name);
        if (found != string::npos) {
            database[i]->showInformation();
        }
    }
}

void ToyDatabase::showAllWithHigherPrice(double price)
{
    for (int i = 0; i < database.size(); i++) {
        if (database[i]->countTotalPrize() >= price) {
            database[i]->showInformation();
        }
    }
}

void ToyDatabase::showAllWithLowerPrice(double price)
{
    for (int i = 0; i < database.size(); i++) {
        if (database[i]->countTotalPrize() <= price) {
            database[i]->showInformation();
        }
    }
}




