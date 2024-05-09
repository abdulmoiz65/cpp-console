// Unary operator overloading :
        // unary operator only contain one operand .


// unary operator overloading through class function 

#include<iostream>
using namespace std;

class A{
    
        int a;
        int b;
    public:
        A(int x, int y){
            a = x;
            b = y;
        }
        void print(){
            cout<<a<<" "<<b<<endl;
        }
        void operator -(){
            a = -a;
            b = -b;
        }

};

int main() {
     A obj(10,-25);
     obj.print();
    -obj;
    obj.print();


    return 0;
}