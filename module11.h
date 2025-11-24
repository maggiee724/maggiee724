#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

class Product {
private:
    int id;
    string name;
    float price;

public:
    // Constructor Declaration
    Product(int i, string n, float p);

    // Destructor Declaration
    ~Product();

    // Method to display info
    void printDetails();
};

#endif