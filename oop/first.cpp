#include <iostream>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString); 

    int vowelCount = 0;

    
    for (char& c : inputString) {
        c = tolower(c);
    }

    
    for (char c : inputString) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
