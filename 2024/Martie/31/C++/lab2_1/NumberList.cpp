#include "NumberList.h"
#include <algorithm> // sort
#include <iostream>

using namespace std;

void NumberList::Init() {
    count = 0;
}

bool NumberList::Add(int x) {
    if (count >= 10) {
        return false;
    }
    numbers[count++] = x;
    return true;
}

void NumberList::Sort() {
    sort(numbers, numbers + count); // first param is pointer to first elem and second param is last elem in array + 1
}

void NumberList::Print() {
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}