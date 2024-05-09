#include<iostream>
using namespace std;

class A{
    int a = 10;
    int b = 89;

friend class B;

};

class B{

public:
void add(A r1){
    cout<<r1.a<<"  "<<r1.b;
}


};

int main() {
    A obj; 
    B obj2;
    obj2.add(obj);
    return 0;
}