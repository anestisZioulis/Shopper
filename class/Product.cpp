#include "Product.h"
#include <iostream>
#include <cstring>

using namespace std;

Product::Product() {
    productID=0;
	strcpy(description, " ");
    productPrice=0.0;
}

void Product::setData(int productID1, char description1[], float productPrice1) {
    productID=productID1;
	strcpy(description, description1);
    productPrice=productPrice1;
}

void Product::printData() {
	cout << productID << "  |" << description << "|";
	cout.width(6); cout << std::right << productPrice << endl;
}

int Product::getProductID() const {
	return productID;
}

float Product::getProductPrice() const {
	return productPrice;
}

Product::Product(int productId, char *description) {

}
