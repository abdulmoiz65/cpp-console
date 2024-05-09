#include<iostream>
using namespace std;

class A{
public:
string name;
int age;

void info(){
    try{
        cout<<"enter your name : ";
        cin>>name;
        cout<<"enter your age : ";
        cin>>age;

        if(age >= 19){
            cout<<"your are a right person for this job \n";
            if(name == "moiz"){

            }
            else{
                throw(name);
            }
        }
        else{
            throw(age);
        }
    }
    catch(string name){
        cout<<"please take a guy whose name is MOIZ \n";
    }
    catch(int age){
        cout<<"you are not a right person \n";
    }
}



};

int main() {
     A obj;
     obj.info();
    return 0;
}