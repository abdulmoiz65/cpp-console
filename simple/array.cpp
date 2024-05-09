#include<iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 23, 324, 4};
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
