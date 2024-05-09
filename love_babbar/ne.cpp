#include<iostream>
using namespace std;

class A {

    int b  ;

public:
     void display( int c ){
        b = c;
        cout<<b;
    }
};

int main(){
 A obj;

 obj.display(9);

    return 0;
}