//find highest digit

#include <iostream>
using namespace std;

int main() {
    int num, high = 0;
    
    cout << "Enter a 4-digit number: ";
    cin >> num;
    
    while (num > 0)
	 {
        int digit = num % 10;
        if (digit > high) 
		{
            high = digit;
        }
        num /= 10;
    }
    cout << " highest digit is: " << high << endl;
    return 0;
}

