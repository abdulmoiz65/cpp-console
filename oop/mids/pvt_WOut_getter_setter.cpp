#include <iostream>
using namespace std;

class Person{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 
 
  // declaring constructor
  Person()
  {
      cout<<"Default constructor is called"<<endl;
      name = "student";
      age = 12;
  }
  
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
  }
  
};
int main() 
{
    // creating object of class using default constructor
    Person obj;
    
    // printing class data members 
    obj.display();
    
    return 0;
}