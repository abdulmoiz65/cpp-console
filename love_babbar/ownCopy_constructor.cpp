#include<iostream>
using namespace std;

class A{

 string name;
 string id;

public:
A( string name , string id ){
  this ->  name = name ;
  this ->  id = id ;
}

// copy constructor 
A(A& temp){
    cout<<"my copy constructor !";
    this -> name = temp.name;
    this -> id = temp.id;
}
A(){
    cout<<"jagdjhasg"<<"\n";
}

void  print(){
    cout<< "name :"<<name << " id :"<<id<<endl;
}

};

int main() {


     A obj("moiz","sp23-bscs-0022");
     obj.print();

    A obj2(obj);
    obj2.print();
    return 0;
}