#ifndef PRODUCT_INCLUDED
#define PRODUCT_INCLUDED

#include <string>
using namespace std;

class Product
{
protected:
	enum ProductTypes { good, processed_material, raw_material };

	ProductTypes productType;
public:
	ProductTypes getProductType(){ return productType; }

	Product() {}
	virtual ~Product() {}
};

#endif // Product included
