#include "class/Customer.h"
#include "class/Product.h"
#include <fstream>
#include <iostream>

using namespace std;

void importProducts(ifstream &fin, Product productList[]);
int searchID(Product productList[], int productID);

int main(__attribute__((unused)) int argc,
         __attribute__((unused)) char **argv) {
    Product productList[5]{};
    Customer customer;
    int i, productID, findProductID;

    //file check, import function execution
    ifstream inFile("../products.txt");
    if (!inFile)
        cout << "No file found!" << endl;
    else
        importProducts(inFile, productList);

    customer.readData(); //entry of customer data

    do {
        //display of the list header
        cout << "\nList of Available Products" << endl;
        cout << "------------------------------" << endl;
        cout << "ID | ";
        cout.width(17);
        cout << left << "Description";
        cout << "| Price" << endl;
        cout << "------------------------------" << endl;

        //display of the available products
        for (i = 0; i < 5; i++)
            productList[i].printData();
        cout << "------------------------------" << endl;
        cout << "Provide a product ID to add in the cart(press 0 for checkout): ";
        cin >> productID;
        findProductID = searchID(
                productList, productID); // check the list for the provided product ID

        //if the product ID exists, adds the product to the cart
        if (findProductID >= 0) {
            customer.purchaseProduct(productList[findProductID]);
            cout << "...Product added in cart..." << endl;
        } else if (productID != 0)
            cout << "...This product ID does not exist!" << endl;
    } while (productID != 0);
    cout << "...checkout!\n" << endl;
    customer.printData(); // displays customer data
    cout << "Thank you for your order! We will be happy to serve you again!" << endl;

    return 0;
}

/*
 * Imports the product list from a file
 */
void importProducts(ifstream &fin, Product productList[]) {
    int i = 0, id;
    char description[20];
    float price;

    fin >> id;
    while (!fin.eof()) {
        fin.get(description, 19);
        fin >> price;
        productList[i].setData(id, description, price);
        fin >> id;
        i++;
    }
}

/*
 * search if the product ID exists else return -1
 */
int searchID(Product productList[], int productID) {
    int i = 0;
    while (i < 5) {
        if (productID == productList[i].getProductID()) {
            return i;
        } else
            i++;
    }
    return -1;
}
