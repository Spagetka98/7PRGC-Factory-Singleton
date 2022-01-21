#include "Toy.h"
#include <stdexcept>
#include <algorithm>

using namespace std;

Toy::Toy(int id, string nameOfToy, string nameOfManufacturer, double price,int modelsInPackage)
{
	if (nameOfToy.empty()) throw runtime_error("Parameter nameOfToy cannot be empty!");
	if (nameOfManufacturer.empty()) throw runtime_error("Parameter nameOfManufacturer cannot be empty!");
	if (price < 0) throw runtime_error("Parameter price cannot below 0!");
	if (modelsInPackage < 0) throw runtime_error("Parameter modelsInPackage cannot below 0!");

	if (all_of(nameOfToy.begin(), nameOfToy.end(), ::isdigit)) throw runtime_error("Parameter nameOfToy must contain letters!");
	if (all_of(nameOfManufacturer.begin(), nameOfManufacturer.end(), ::isdigit)) throw runtime_error("Parameter nameOfToy must contain letters!");

	this->id = id;
	this->nameOfToy = nameOfToy;
	this->nameOfManufacturer = nameOfManufacturer;
	this->price = price;
	this->modelsInPackage = modelsInPackage;
}

Toy::~Toy()
{
}

int Toy::getId() const
{
	return this->id;
}

string Toy::getNameOfToy() const
{
	return this->nameOfToy;
}

string Toy::getNameOfManufacturer() const
{
	return this->nameOfManufacturer;
}

double Toy::getPrice() const
{
	return this->price;
}

void Toy::setNameOfToy(string nameOfToy)
{
	if (nameOfToy.empty()) 
		throw runtime_error("Parameter nameOfToy cannot be empty!");
	if(all_of(nameOfToy.begin(), nameOfToy.end(), ::isdigit))
		throw runtime_error("Parameter nameOfToy must contain letters!");

	this->nameOfToy = nameOfToy;
}

void Toy::setNameOfManufacturer(string nameOfManufacturer)
{
	if (nameOfManufacturer.empty())
		throw runtime_error("Parameter nameOfManufacturer cannot be empty!");
	if (all_of(nameOfManufacturer.begin(), nameOfManufacturer.end(), ::isdigit))
		throw runtime_error("Parameter nameOfManufacturer must contain letters!");


	this->nameOfManufacturer = nameOfManufacturer;
}

void Toy::setPrice(double price)
{
	if (price < 0)
		throw runtime_error("Parameter price cannot below 0!");

	this->price = price;
}

void Toy::setModelsInPackage(int modelsInPackage)
{
	if (modelsInPackage < 0)
		throw runtime_error("Parameter modelsInPackage cannot below 0!");

	this->modelsInPackage = modelsInPackage;
}

int Toy::getModelsInPackage() const
{
	return this->modelsInPackage;
}
