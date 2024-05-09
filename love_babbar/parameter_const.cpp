#include<iostream>
using namespace std;

class A{
    public:
    A(int a, string b){
        cout<<a<<b<<endl;
    }
    ~A(){
        cout<<"i am a destructor";
    }
};

int main(){
A obj(3,"amir");

    return 0;
}