#include "Product.h"
#include <string>

#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;

class Customer {
 private:
	string username{};
	float totalCost=0.0;
 	
 public:
	Customer();
	void readData();
	void printData();
	void purchaseProduct(Product product);
	void shippingCost() const;
 	
};

#endif
