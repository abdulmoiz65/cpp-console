#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "-----------INSERTION SORT-----------\n\n";
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size]; // Dynamic memory allocation

    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, size);
    printArray(arr, size);

    delete[] arr; // Freeing the dynamically allocated memory
    return 0;
}
