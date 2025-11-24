#include <iostream>
#include <string>
using namespace std;

class Product {
    int id;
    string name;
    float price;
public:
    // Constructor
    Product(int i, string n, float p) : id(i), name(n), price(p) {
        cout << "Constructor called\n";
    }

    // Destructor
    ~Product() {
        cout << "Destructor called\n";
    }

    void printDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

int main() {
    // You correctly used custom values here as requested by the instructions!
    Product p(34, "Whiteout 3 packs", 7.67);
    p.printDetails();
    return 0;
}