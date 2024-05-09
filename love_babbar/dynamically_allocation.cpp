#include<iostream>
using namespace std;

class hero{
    public:
    int a = 10;
};

int main(){

// dynamically allocation
hero *obj = new hero;


cout<<sizeof(hero)<<endl;


cout<<"print hero : "<<(*obj).a<<endl;
// or  
cout<<"print hero : "<<obj->a;

}