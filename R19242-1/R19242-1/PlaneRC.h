#ifndef PLANERC_H
#define PLANERC_H

#include "Toy.h"

using namespace std;

class PlaneRC : public Toy
{
public:
	PlaneRC(int id, string nameOfToy, string nameOfManufacturer, double price, int modelsInPackage);
	virtual ~PlaneRC();
	void showInformation();
	double countTotalPrize();
};

#endif
