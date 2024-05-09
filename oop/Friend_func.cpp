#include<iostream>
using namespace std;

class sub;

class add{
    private:
    int money = 10;
    friend void function(add,sub);
};
class sub{
    private:
    int ab = 5;
    friend void function(add,sub);
};

void function(add r1, sub r2)
{
    cout<<"sum : "<<r1.money<<" " <<r2.ab;
}
int main(){

add obj1;
sub obj2;

function(obj1,obj2);
    
}