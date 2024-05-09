#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int id ;
        int age; 
};

int main(){

    int stdnum = 3;

    // object with array
    student std[stdnum];

    // access
    // here we definr array indexs for print the objects of class with loop
    std[0].name="konain";
    std[0].id=0023;
    std[0].age=19;

    std[1].name="moiz";
    std[1].id=0022;
    std[1].age=19;
    
    std[2].name="affan";
    std[2].id=0043;
    std[2].age=20;

    // simple way to print the access class of objects
    // cout << "Student 1:" << endl;
  
// with loop 
for (int i=0; i < stdnum ; i++){
    cout<<"STUDENT "<<i+1<<":"<<endl;
    cout<<"NAME: "<<std[i].name<<endl;
    cout<<"ID: "<<std[i].id<<endl;
    cout<<"AGE: "<<std[i].age<<endl<<endl;
}
    return 0;
}
