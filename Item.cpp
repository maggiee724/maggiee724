#include "Item.h"

int binarySearch(Item* items, int size, int targetId) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (items[mid].id == targetId)
            return mid;
        else if (items[mid].id < targetId)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
