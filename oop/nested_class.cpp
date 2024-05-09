// nested class
        // "::" operator of scope resolution

        
#include<iostream>
using namespace std ;

class A{
    public:
     class b{
          public:  string name;
        };
    };


main(){
    A::b obj;
    obj.name="moiz";
    cout<<obj.name;

}