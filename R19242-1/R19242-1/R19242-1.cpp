#include <iostream>
#include "IdGenerator.h"
#include "ToyFactory.h"
#include "ToyDatabase.h"
#include "InputCheck.h"
#include <algorithm>

using namespace std;

IdGenerator* IdGenerator::instance;
int main()
{
   int type;
   IdGenerator* s = s->getInstance();
   ToyDatabase* toyDatabase = new ToyDatabase();

	while (true){
		cout << "Vyberte: 0-Konec / 1-Pridani produktu / 2-Smazani produktu / 3-Vypis vsech / 4-Vypis podle jmena hracek / 5-Vypis podle ceny vyssi / 6-Vypis podle ceny nizsi / 7-Zmena ceny hracky / 8-Zmena poctu kusu v baleni" << endl;
		cin >> type;

		if (type == 0)
			break;

		if (type == 1) {
			try {
				int type = InputCheck::getIntFromUser("Vyberte typ: 1-CarRc / 2-PlaneRC", "Typ musi byt cislo!");
				
				string nameOfToy = InputCheck::getStringFromUser("Zadejte jmeno hracky: ","Nezadal jste jméno hračky");

				string nameOfManufacturer = InputCheck::getStringFromUser("Zadejte jmeno vyrobce: ","Nezadal jste jméno výrobce");

				double price = InputCheck::getIntFromUser("Zadejte cenu: ", "Cena musi být cislo!");

				int modelsInPackage = InputCheck::getIntFromUser("Zadejte pocet modelu v baleni: ", "Pocet modelu v baleni musi byt cislo!");
			
				Toy* toy = ToyFactory::createToy(type,s->getId(), nameOfToy, nameOfManufacturer, price, modelsInPackage);
				toyDatabase->addToy(toy);

				cout  << "Produkt byl vytvoren" << endl;
			}
			catch (runtime_error& e) {
				cout << "Nepovedlo se vytvorit dany produkt " << endl;
				cout  << e.what() << endl;
			}
		}
		else if (type == 2) {
			try {
				int idToDelete = InputCheck::getIntFromUser("Zadejte id ke smazani vyrobku: ","Nezadal jste cislo!");

				toyDatabase->removeToyById(idToDelete);
			}
			catch (runtime_error& e) {
				cout << e.what() << endl;
			}
		}
		else if (type == 3) {
			cout << "Vypis vsech hracek. Pocet: " << toyDatabase->getSize() << endl;

			toyDatabase->showAll();
		}
		else if (type == 4) {
			try {
				cout << "Vypis vsech hracek podle jmena. Pocet: " << toyDatabase->getSize() << endl;
				string nameOfToy = InputCheck::getStringFromUser("Zadejte jmeno hracky: ","Nezadal jste jméno hračky");

				toyDatabase->showAllByNameOfToy(nameOfToy);
			}
			catch (runtime_error& e) {
				cout << e.what() << endl;
			}
		}
		else if (type == 5) {
			try {
				cout << "Vypis vsech hracek podle ceny vyssi. Pocet: " << toyDatabase->getSize() << endl;

				double price = InputCheck::getDoubleFromUser("Zadejte cenu: ","Zadal jste neplatny retezec");
				
				toyDatabase->showAllWithHigherPrice(price);
			}
			catch (runtime_error& e) {
				cout << e.what() << endl;
			}
		}
		else if (type == 6) {
			try {
				cout << "Vypis vsech hracek podle ceny nizsi. Pocet: " << toyDatabase->getSize() << endl;

				double price = InputCheck::getDoubleFromUser("Zadejte cenu: ", "Zadal jste neplatny retezec");

				toyDatabase->showAllWithLowerPrice(price);
			}
			catch (runtime_error& e) {
				cout << e.what() << endl;
			}
		}
		else if (type == 7) {
			try {
				cout << "Zmenit cenu za hracku" << endl;
				int idOfToy = InputCheck::getIntFromUser("Zadejte id hracky: ", "Nezadal jste cislo!");

				double price = InputCheck::getDoubleFromUser("Zadejte cenu: ", "Zadal jste neplatny retezec");

				toyDatabase->changePricePerUnit(idOfToy,price);
			}
			catch (runtime_error& e) {
				cout << e.what() << endl;
			}
		}
		else if (type == 8) {
			try {
				cout << "Zmenit pocet v baleni" << endl;
				int idOfToy = InputCheck::getIntFromUser("Zadejte id hracky: ", "Nezadal jste cislo!");

				double numberInPackage = InputCheck::getDoubleFromUser("Zadejte pocet v baleni: ", "Zadal jste neplatny retezec");

				toyDatabase->changeNumberInPackage(idOfToy,numberInPackage);
			}
			catch (runtime_error& e) {
				cout << e.what() << endl;
			}
		}
		
	}

	delete s;
	delete toyDatabase;
}
