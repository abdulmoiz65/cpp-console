// default copy constructor 
#include<iostream>
using namespace std;

class A{
   public:

int health = 20;
char level;
    
    public:
A(){
    cout<<"constructor"<<endl;
}

A( int health , char level){
    this-> health = health;
    this-> level = level;
    // cout<<"constructor health "<<health<<"and level"<<level<<endl;
}
void display(){
    cout<<this->health<<this->level<<endl;
}

};

int main() {
    cout<<endl;

A obj;
obj.display();

A obj2(10,'A');  
obj2.display();


A obj3(obj2);
obj3.display();
    return 0;
}