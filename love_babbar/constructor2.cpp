#include<iostream>
using namespace std;
class A{
    public:
    string  m = "moiz";
    A(){
        cout<<"CONSTRUCTOR!"<<endl;
    }

    A(int a ){
        cout<<a<<endl;
        cout<<"constructor called"<<endl;
    }
};
int main() {
        A obj;
    A objj(4);
     
    cout<<obj.m;
    return 0;
}