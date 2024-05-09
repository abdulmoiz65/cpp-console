#include<iostream>
using namespace std;


class student{
    public:
        string name;
        int id ;
        int age; 
};

int main(){
    // objects
    student std1;
    student std2;
    student std3;
    
    // access
    std1.name="moiz";
    std1.id=0022;
    std1.age=19;
    
    std2.name="affan";
    std2.id=0043;
    std2.age=20;

    std3.name="konain";
    std3.id=0023;
    std3.age=19;

    // print 
    cout << "Student 1:" << endl;
    cout << "Name: " << std1.name << endl;
    cout << "ID: " << std1.id << endl;
    cout << "Age: " << std1.age << endl << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << std2.name << endl;
    cout << "ID: " << std2.id << endl;
    cout << "Age: " << std2.age << endl << endl;

    cout << "Student 3:" << endl;
    cout << "Name: " << std3.name << endl;
    cout << "ID: " << std3.id << endl;
    cout << "Age: " << std3.age << endl;


    return 0;
}