// swaping with addition and subtraction 
#include<iostream>
using namespace std;
int main(){

    int a = 5;
    int b = 10;

cout<<"VALUES BEFORE SWAPIMG"<<endl;
cout<<"A = 5"<<endl;
cout<<"B = 10"<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

cout<<"VALUES AFTER SWAPING"<<endl;
cout<<"A = "<<a<<endl;
cout<<"B = "<<b<<endl;


    return 0;
}