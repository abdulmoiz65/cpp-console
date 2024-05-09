#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    cout << "\nSorted array: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If target is found, return its index
        if (arr[mid] == target)
            return mid;
        // If target is greater, search in the right half
        else if (arr[mid] < target)
            left = mid + 1;
        // If target is smaller, search in the left half
        else
            right = mid - 1;
    }
    
    // If target is not found
    return -1;
}

int main() {
    cout << "-------------SELECTION SORT-------------\n\n";
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    selectionSort(arr, size);
    printArray(arr, size);
    
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    
    // Perform binary search
    int index = binarySearch(arr, size, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array.\n";
    
    return 0;
}
