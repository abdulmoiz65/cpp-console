// Access the private data members without get set functions 

// Access private data members with default constructor and display function

#include<iostream>
using namespace std;

class user{
    int id ;
    string name ;
    int age;

public:
    user(){
        cout<<"enter your id : ";
        cin>>id;
        cout<<"enter your name : ";
        cin>>name;
        cout<<"enter your age : ";
        cin>>age;
    }
void display(){
        cout<<"your id : "<<id <<endl;
        cout<<" your name : "<<name <<endl;
        cout<<" your age : "<<age <<endl;
    }
};

int main(){
    user obj;
    obj.display();


}