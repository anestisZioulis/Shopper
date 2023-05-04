#ifndef PRODUCT_H
#define PRODUCT_H

class Product {

private:
    int productID = 0;
    char description[20]{};
    float productPrice = 0.0;
    
public:
    Product();

    Product(int productId, char *description);

    void setData(int productID1, char description1[], float productPrice1);
    void printData();
    int getProductID() const;
    float getProductPrice() const;
};

#endif
