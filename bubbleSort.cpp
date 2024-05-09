#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if current element is greater than the next element
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Binary search function
int binarySearch(int array[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If target is found, return its index
        if (array[mid] == target)
            return mid;
        // If target is greater, search in the right half
        else if (array[mid] < target)
            left = mid + 1;
        // If target is smaller, search in the left half
        else
            right = mid - 1;
    }
    
    // If target is not found
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int array[size];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    // Sort the array before performing binary search
    bubbleSort(array, size);
    
    cout << "Sorted array in ascending order: ";
    printArray(array, size);
    
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    
    // Perform binary search
    int index = binarySearch(array, size, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array.\n";
    
    return 0;
}
