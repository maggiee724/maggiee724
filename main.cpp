#include <iostream>
#include "Item.h"

using namespace std;

int main() {
    const int SIZE = 100;

    Item* items = new Item[SIZE];

    for (int i = 0; i < SIZE; i++) {
        items[i].id = i + 1;
        items[i].name = "Item" + to_string(i + 1);
    }

    int searchId;
    cout << "Enter an ID to search for: ";
    cin >> searchId;

    int index = binarySearch(items, SIZE, searchId);

    if (index != -1) {
        cout << "Item found!" << endl;
        cout << "ID: " << items[index].id << endl;
        cout << "Name: " << items[index].name << endl;
    } else {
        cout << "Item not found." << endl;
    }

    delete[] items;

    return 0;
}
