#include <iostream>

using namespace std;

void swap(int* oneVar, int* twoVar) {
    int temp = *oneVar;
    *oneVar = *twoVar;
    *twoVar = temp;
}

int main() {
    int firstValue = 10;
    int secondValue = 20;

    int* oneVarPtr = &firstValue;
    int* twoVarPtr = &secondValue;

    cout << "Before swapping:" << endl;
    cout << "oneVar = " << *oneVarPtr << ", twoVar = " << *twoVarPtr << endl;

    swap(oneVarPtr, twoVarPtr);

    cout << "After swapping:" << endl;
    cout << "oneVar = " << *oneVarPtr << ", twoVar = " << *twoVarPtr << endl;

    return 0;
}

