#include<iostream>
using namespace std;

class A{
    int a = 6;
    int b = 55;

public:
void print(){
    cout<< a <<" "<< b ;
}

};

int main() {

A obj ;
obj.print();

    return 0;
}