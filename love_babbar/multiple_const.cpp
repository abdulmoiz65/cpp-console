#include<iostream>
using namespace std;

class A{
public:
int num1;

A(){
    cout<<"i am a constructor!"<<endl;
}
// 2nd cons 
A(int a ){
    cout<<" 2nd constructor ! "<<a<<endl;
}
A(string d){
    cout<<"3rd constructor!"<<d<<endl;
}
~A(){
    cout<<" i am a destructor"<<endl;
}
};

int main() {
A obj(10);
A a;
A c("moiz");


    return 0;
}