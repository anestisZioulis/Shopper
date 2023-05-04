#include "Customer.h"
#include "Product.h"
#include <iostream>

using namespace std;

Customer::Customer() {
    username = " ";
    totalCost = 0.0;
}

void Customer::readData() {

        cout << "Provide client username: ";
        cin >> username;
        cout << "\nWe are ready for your order dear " << username << "!" << endl;

}

void Customer::printData() {
    cout << "Username: " << username << "\n" << endl;
    cout << "Product(s) cost: " << totalCost << "$" << endl;
    shippingCost();
}

void Customer::purchaseProduct(Product product) {
    totalCost += product.getProductPrice(); //
}

void Customer::shippingCost() const {
    if (totalCost < 200 && totalCost > 0) {
        cout << "Shipping cost: 50$" << endl;
    } else if (totalCost > 200) {
        cout << "Free Shipping!" << endl;
    } else {
        cout << "\n--Your cart is empty!--" << endl;
    }
}
