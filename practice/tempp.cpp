#include<iostream>
using namespace std;

template <typename T>
T add(T a , T b){
    cout<< a + b;
    
}

int main() {
     
int x = add(4,5);

add(10,5);

    return 0;
}