#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    // Functions to handle file operations
    void saveToFile();
    void loadFromFile();
};

#endif