#include "Good.h"


Good::Good() {
	Good::GoodTypes type = Good::GoodTypes::default_good;
	randomGoodType(type);
}
Good::Good(GoodTypes type) {
	goodType = type;
}

int Good::randomGoodType(Good::GoodTypes &type) {
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1, 7);
	int getRandom = distribution(generator);  // generates number in the range begin..end
	auto random = bind(distribution, generator);
	return random();
}

void Good::setGoodType(Good::GoodTypes newType) {
	goodType = newType;
}

string Good::getGoodTypeStr(Good::GoodTypes type) { Good::GoodTypetoStr strGoodType; return strGoodType[type]; }
Good::GoodTypes Good::getGoodTypesEnum() { return goodType; }

Good::~Good() {
}

ifstream& operator>>(ifstream& fin, Good::GoodTypes type) {
	int temp;
	fin >> temp;

}