#include<iostream>
using namespace std;

class A{
    int a = 4;
    int b = 5;

friend void operator - (A &r1);
   
    public:
    void print(){
cout<<a << " "<<b;

    }
};

void operator - (A &r1){
    r1.a = -r1.a;
    r1.b = -r1.b;

}


int main() {
A obj;
operator -(obj);
obj.print();


    return 0;
}