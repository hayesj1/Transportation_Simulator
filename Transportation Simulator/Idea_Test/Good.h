#ifndef GOOD_INCLUDED
#define GOOD_INCLUDED

#include <unordered_map>
#include <iostream> // for debugging
#include <fstream>
#include <random>
#include <functional>
using namespace std;
//#include "Product.h"

class Good //: public Product
{
public:
	enum GoodTypes { food = 1, lumber, stone, manufactured, metal, plastic, other, default_good };

	struct GoodTypetoStr : unordered_map<int, string>{
		GoodTypetoStr()
		{
			this->operator[](food) = "Food";
			this->operator[](lumber) = "Lumber";
			this->operator[](stone) = "Masonry Materials";
			this->operator[](manufactured) = "Manufactured Goods";
			this->operator[](metal) = "Metals";
			this->operator[](plastic) = "Plastic";
			this->operator[](other) = "Other";
		}
		~GoodTypetoStr(){};
	};

	Good();
	Good(GoodTypes type);

	void setGoodType(GoodTypes newType);
	string getGoodTypeStr(GoodTypes type);
	GoodTypes getGoodTypesEnum();

	virtual ~Good();

protected:
	GoodTypes goodType;
	double price;
	double mass;

	int randomGoodType(Good::GoodTypes &type);

	friend ifstream& operator>>(ifstream& fin, GoodTypes type);

};




#endif // Good included

