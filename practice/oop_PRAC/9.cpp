#include <iostream>

using namespace std;

template<typename T>
T average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / static_cast<T>(size);
}

int main() {
    int intArray[] = {2, 4, 6, 8, 10};
    long longArray[] = {2L, 4L, 6L, 8L, 10L};
    double doubleArray[] = {2.0, 4.0, 6.0, 8.0, 10.0};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Average of intArray: " << average(intArray, 5) << endl;
    cout << "Average of longArray: " << average(longArray, 5) << endl;
    cout << "Average of doubleArray: " << average(doubleArray, 5) << endl;
    // Since char is treated as an integer type, it can also be used
    cout << "Average of charArray: " << static_cast<int>(average(charArray, 5)) << endl;

    return 0;
}
