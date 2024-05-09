#include<iostream>
using namespace std;

class A{
    public:
    string std_name;
    string std_id;
    private:
    int std_marks;
    int std_contact;

public:
// getters 
    int get_stdmarks(){
        return std_marks;
    }
    int get_stdcont(){
        return std_contact;
    }  
    void set_marks(int marks){
         std_marks = marks;
    }
    void set_contact(int contact){
         std_contact = contact;
    }

};

int main(){
    A obj;
    obj.std_name = "moiz";
    obj.std_id = "sp32-bscs-0022";
    obj.set_marks(78);
    obj.set_contact(03273174213);
    cout<<"student name is : "<<obj.std_name<<endl;
    cout<<"student id is : "<<obj.std_id<<endl;
    cout<<"student marks in oop : "<<obj.get_stdmarks()<<endl;
    cout<<"student contact : "<<obj.get_stdcont();
    
    return 0;
}