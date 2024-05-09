#include<iostream>
using namespace std;

class A{
    public : 
    // data member 
    int health = 10;

A(int health){
    this -> health = health;
    cout<<this<<" ";
    cout<<"constructor health : "<<health<<endl;
}

};

int main() {
A obj(27);
cout<<"data member health : "<<obj.health<<endl;
cout<<&obj<<endl;

    return 0;
}