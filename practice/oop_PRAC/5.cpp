#include<iostream>
using namespace std;

class A{
    int a = 5;
    int b = 4;

public:
A(int x , int y ){
    a  =  x;
    b  =  y;
cout<<a << " "<<b<<endl;
}


};

int main() {
    A obj(10,56) , t(5 ,546) , r(5,65); 
    return 0;
}