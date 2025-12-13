#ifndef ITEM_H
#define ITEM_H

#include <string>

struct Item {
    std::string name;
    int id;
};

int binarySearch(Item* items, int size, int targetId);

#endif
