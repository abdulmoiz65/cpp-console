#include<iostream>
using namespace std;

class A{
    int a = 10;
    int b = 20;

friend void operator - (A &r1);

};

void operator - (A &r1){
    r1.a = -r1.a;
    r1.b = -r1.b;
    cout<<r1.b <<" "<<r1.a;
}


int main() {
     A obj;
     operator-(obj);
    return 0;
}