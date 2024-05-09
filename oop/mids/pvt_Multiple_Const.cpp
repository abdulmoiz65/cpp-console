// Access private data members with the multiplke constructor and display fuction 
#include<iostream>
using namespace std;

class user{
    string name;
    int age;

public:
    user(string user_name){
        cout<<"first constructor"<<endl;
        age=20;
        name = user_name;
    }
    user(int user_age){
        cout<<"2nd constructor"<<endl;
        name="Hafeez";
        age = user_age;
        
    }
    user(string user_name , int user_age){
        cout<<"third constructor"<<endl;
        name = user_name;
        age = user_age;
        
    }
    void display(){
        cout<<"your name : "<<name<<endl;
        cout<<"yout age : "<<age<<endl;
    }
};
int main(){
    user obj1("moiz");
    obj1.display();


    user obj2(19);
    obj2.display();

    
    user obj3("Abdul hafeez bhatti " ,19);
    obj3.display();

    

    return 0;
}