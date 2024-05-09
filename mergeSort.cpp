#include <iostream>
using namespace std;

// Merge two sorted subarrays into one sorted array
void merge(int arr[], int begin, int mid, int end) {
    int left_size = mid - begin + 1;
    int right_size = end - mid;
    
    int left[left_size], right[right_size];
    
    // Copy elements to temporary arrays
    for (int i = 0; i < left_size; i++)
        left[i] = arr[begin + i];
    for (int j = 0; j < right_size; j++)
        right[j] = arr[mid + 1 + j];
    
    // Merge temporary arrays into original array
    int i = 0, j = 0, k = begin;
    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements of left array
    while (i < left_size) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    // Copy remaining elements of right array
    while (j < right_size) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Recursively sort subarrays
void mergeSort(int arr[], int begin, int end) {
    if (begin >= end)
        return;
    
    int mid = begin + (end - begin) / 2;
    
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    
    merge(arr, begin, mid, end);
}

// Binary search for an element in the sorted array
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid; // Element found, return its index
        else if (arr[mid] < target)
            left = mid + 1; // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }
    
    return -1; // Element not found
}

int main() {
    cout << "-------------MERGE SORT--------------\n";
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    mergeSort(arr, 0, size - 1);
    
    cout << "Sorted array is:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    // Prompt for element to search
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
