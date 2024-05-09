#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Partition function for Quick Sort
int partition(int array[], int low, int high) {
    int pivot = array[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of smaller element
    
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (array[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(&array[i], &array[j]); // Swap current element with element at index i
        }
    }
    swap(&array[i + 1], &array[high]); // Swap pivot with element at index i + 1
    return (i + 1); // Return partition index
}

// Quick Sort function
void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Partition index
        
        // Recursively sort elements before and after partition
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Binary search function
int binarySearch(int array[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Check if target is present at mid
        if (array[mid] == target)
            return mid;
        
        // If target greater, ignore left half
        if (array[mid] < target)
            low = mid + 1;
        // If target is smaller, ignore right half
        else
            high = mid - 1;
    }
    // If target is not present
    return -1;
}

// Main function
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int data[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> data[i];
    
    cout << "Unsorted Array:\n";
    printArray(data, n);
    
    quickSort(data, 0, n - 1);
    
    cout << "Sorted Array:\n";
    printArray(data, n);
    
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    
    int index = binarySearch(data, 0, n - 1, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array.\n";
    
    return 0;
}
