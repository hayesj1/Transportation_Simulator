#include "Supplier.h"

int Supplier::randomNumGen(int begin, int end) { random_device rd; return rd() % 100; }
void Supplier::addLocation(string newName, Location newLocation) { default_depot.locations.insert(pair<string, Location>(newName, newLocation)); }
void Supplier::resupply() { goodsRemaining = totalStorageSpace; resupplyTime = totalResupplyTime; }

int Supplier::getRand(int range) {
	switch (range) {
	case 5:
		return randomNumGen(1, 5);
		break;
	case 10:
		return randomNumGen(1, 10);
		break;
	case 100:
		return randomNumGen(1, 100);
		break;
	default:
		return randomNumGen(1, 25);
		break;
	}
}
int Supplier::getRand(int begin, int end) { return randomNumGen(begin, end); }
string Supplier::getName() { return name; }
int Supplier::getGoodsRemaining() { return goodsRemaining; }
int Supplier::getResupplyTime() { return resupplyTime; }

void Supplier::setName(string newName) { name = newName; }
void Supplier::setGoodsRemaining(int remainingSupply) { goodsRemaining = remainingSupply; }
void Supplier::setResupplyTime(int timeTillResupply) { resupplyTime = timeTillResupply; }

Supplier::Supplier() : Good() {
	name = "Default Supplies";
	Good::GoodTypes type = Good::GoodTypes::default_good;
	randomGoodType(type);
	good.setGoodType(type);
}
Supplier::Supplier(string newName, Good::GoodTypes type, int timeTillResupply) : Good(type) {
	totalResupplyTime = timeTillResupply;
	name = newName;
	good.setGoodType(type);
}
Supplier::Supplier(string filePath) {
	ifstream fin(filePath);
	fin >> this;
}
Supplier::~Supplier() {}

ifstream& operator>>(ifstream& fin, Supplier supply) {
	fin >> supply.totalResupplyTime >> supply.name;// >> good;
}