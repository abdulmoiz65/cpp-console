// aceess private with only constructor 
// and also check how distructor is work 


#include<iostream>
using namespace std;

class A{
    
    string name;
    int age;

public:
    A(string Uname , int Uage){
        name = Uname;
        age = Uage;

        cout<<"your age : "<<name<<endl;
        cout<<"your name  : "<<age<<endl;
    }

    ~A(){
        cout<<"Distructor is called "<<endl;
        cout<< name << endl;
        cout<< age <<endl ;
    }

};

int main(){

A obj("moiz",32);


    return 0;
}