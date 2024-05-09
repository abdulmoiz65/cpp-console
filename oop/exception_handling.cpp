#include<iostream>
using namespace std;
class A {
    public:
    string name;
    int age;

void id_card(){
    try{
        cout<<"enter your name  :";   
  cin>>name;
  cout<<"enter your age  :";   
  cin>>age;
        if(age >= 18){
            cout<<"congratulations you are applicable for id card \n";
        }
        else{
            throw(age);
        }
    }

    catch(int age){
        cout<<"sorry you are not applicable at age "<<age;
    }
}

};

int main() {
  A obj;
  
    obj.id_card();
    return 0;
}