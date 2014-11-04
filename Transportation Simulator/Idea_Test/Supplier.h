#ifndef SUPPLIER_INCLUDED
#define SUPPLIER_INCLUDED
#define MAX_STORAGE 10000

#include <string>
#include <random>
#include <functional>
#include <fstream>
using namespace std;
#include "Good.h"
#include "Location.h"

class Supplier : public Good
{
private:
	int randomNumGen(int begin, int end);
protected:
	Good good;
	int goodsRemaining;
	int resupplyTime;
	int totalResupplyTime;
	int totalStorageSpace;
	string name;
	Location default_depot;
	void resupply();
	//virtual void deliverGoods();
	//virtual bool deliverySuccessful();

public:
	void addLocation(string newName, Location newLocation);

	int getRand(int range);
	int getRand(int begin, int end);
	string getName();
	int getGoodsRemaining();
	int getResupplyTime();

	void setName(string newName);
	void setGoodsRemaining(int remainingSupply);
	void setResupplyTime(int timeTillResupply);
	Supplier();
	Supplier(string newName, Good::GoodTypes type, int timeTillResupply);
	Supplier(string filePath);

	virtual ~Supplier();

	friend ifstream& operator>>(ifstream& fin, Supplier supply);
};

#endif // Supplier included