// constructor will be automatically called when you make object! 
// it doesnt matter you created or not 

#include<iostream>
using namespace std;

class A{
    public:
    int a = 10;
    
    A(){
        cout<<"i am the default constructor!";
    }
};

int main(){
    A obj;
    cout<<endl<<obj.a;
    return 0;
}