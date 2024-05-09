#include<iostream>
using namespace std;

class A {
public:
    int health = 10;
public:
    A(int health){
    this-> health = health;
    cout<<this<<endl;
    cout<< health<<endl;
}

};

int main() {
    A obj(19);
    cout<<obj.health;
    
    cout<<"\n"<<&obj<<endl;
    
    

    return 0;
}