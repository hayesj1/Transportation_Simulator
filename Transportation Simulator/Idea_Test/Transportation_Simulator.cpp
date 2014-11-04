#include <iostream>
using namespace std;
#include "logger.h"
#include "Supplier.h"

int main() {
	Supplier supply("Bob's supply Co.", Good::lumber, 15);
	Supplier supply2;
	Location depot1;
	//Good::GoodTypetoStr strGoodType;
	cout << "Hi!" << endl;
	cout << supply.getName() << endl;
	supply.addLocation("Depot Alpha", depot1);
	printTolog(supply.getGoodTypeStr(supply.getGoodTypesEnum()), "..\\logs\\log.txt");
	cout << supply.getGoodTypeStr(supply.getGoodTypesEnum()) << endl << supply.getRand(0, 100) << endl;
}