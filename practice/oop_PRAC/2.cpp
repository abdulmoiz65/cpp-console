#include<iostream>
using namespace std;

class A{
    int previous_balance;
    int current_balance;

public:
    A(int a , int b){
        previous_balance = a;
        current_balance = b;

    }

void print(){
cout<<current_balance<< "  " <<previous_balance<<endl;

}

void operator - (){
    previous_balance = -previous_balance;
    current_balance = -current_balance;
}

};

int main() {
  A obj(1000 , 20000);
    obj.print();
    -obj;
    obj.print();

    return 0;
}