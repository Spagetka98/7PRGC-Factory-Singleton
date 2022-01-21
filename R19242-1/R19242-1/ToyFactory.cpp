#include "ToyFactory.h"
#include "CarRC.h"
#include "PlaneRC.h"
#include <stdexcept>

Toy* ToyFactory::createToy(int type,int id,string nameOfToy,string nameOfManufacturer,double price,int modelsInPackage)
{
    Toy* newToy = NULL;
	switch (type)
	{
		case 1: {
			newToy = new CarRC(id, nameOfToy, nameOfManufacturer, price, modelsInPackage);
			break;
		}
		case 2: {
			newToy = new PlaneRC(id, nameOfToy, nameOfManufacturer, price, modelsInPackage);
			break;
		}
		default:
			throw runtime_error("Neplatny typ");
	}

	return newToy;
}

