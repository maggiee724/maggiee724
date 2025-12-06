#include <iostream>
#include "menu.h"

using namespace std;

void runMenu() {
    int choice;

    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Item added.\n";
    }
    else if (choice == 2) {
        cout << "Displaying items.\n";
    }
    else if (choice == 3) {
        cout << "Exiting program.\n";
    }
    else {
        cout << "Invalid option.\n";
    }
}

int main() {
    runMenu();
    return 0;
}
