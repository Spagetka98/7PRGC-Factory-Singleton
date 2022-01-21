#ifndef CARRC_H
#define CARRC_H

#include "Toy.h"

using namespace std;

class CarRC : public Toy
{
public:
	CarRC(int id, string nameOfToy, string nameOfManufacturer, double price,int carInPackage);
	virtual ~CarRC();
	void showInformation();
	double countTotalPrize();
};

#endif

