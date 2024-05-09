// Access private data menmebers with getter setter functions 
#include <iostream>
using namespace std ;

class users{

    int id;
    string name;
    int age;

public:
// setter 
    void set_id(int user_id){
        id=user_id;
    }
    void set_name(string user_name){
        name=user_name;
    }
    void set_age(int user_age){
        age=user_age;
    }
// getter 
    int get_id(){
        return id;
    }
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
};
int main(){
    users obj;
    obj.set_id(0022);
    obj.set_name("moiz");
    obj.set_age(19);

cout<<"student id : "<<obj.get_id()<<endl;
cout<<"student name : "<<obj.get_name()<<endl;
cout<<"student age : "<<obj.get_age();
    return 0;
}