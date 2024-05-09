// printing a name of techer through student class 
// first make the name public in teacher class
// then make a function on student class and give the access of teacher class

#include<iostream>
using namespace std;

class teacher{
    public:
    string name;
};

class student{
    teacher t;

    public:
    void showname(string n){
        t.name=n;
        cout<<t.name;
    }
};

int main ()
{
    student obj;
    obj.showname("FAISAL FEROZE");
} 

