#include<iostream>
using namespace std;

class A{
    public:
        string b = "abdul moiz";
    private :
        string c = "s/o Abdul hafeez bhatti";
public:
    void display(){
        cout<<c; }

};

int main(){
    A obj;
    cout<<obj.b<<endl;

    obj.display();
    return 0;
}