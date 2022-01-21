#ifndef TOY_H
#define TOY_H

#include <string>

using namespace std;

class Toy
{
protected:
	int id;
	string nameOfToy;
	string nameOfManufacturer;
	int modelsInPackage;
	double price;
public:
	Toy(int id,string nameOfToy,string nameOfManufacturer,double price,int modelsInPackage);
	virtual ~Toy();
	int getId() const;
	string getNameOfToy() const;
	string getNameOfManufacturer() const;
	double getPrice() const;
	int getModelsInPackage() const;
	void setNameOfToy(string nameOfToy);
	void setNameOfManufacturer(string nameOfManufacturer);
	void setPrice(double price);
	void setModelsInPackage(int modelsInPackage);
	virtual void showInformation() = 0;
	virtual double countTotalPrize() = 0;
};

#endif

