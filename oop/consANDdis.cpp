#include<iostream>
using namespace std;

class A {
public:
    A() {
        for (int i = 1; i <= 10; i++) {
            cout << i << endl;
        }
    };

    ~A() {
        for (int i = 10; i >= 1; i--) {
            cout << i << endl;
        }
    }
};

int main() {
    A obj;
    
    return 0;
}
