// aceess private with only constructor 
// and also check how distructor is work 

#include <iostream>
using namespace std;

class class_name{
  
  // declaring private class data members 
private:
  int a,b;
  
public: 
  
  // declaring Constructor
  class_name(int aa, int bb )
  {
      cout<<"Constructor is called"<<endl;
      a = aa;
      b = bb;
      
      cout<<"Value of a: "<<a<<endl;
      cout<<"Value of b: "<<b<<endl;
      cout<<endl;
  }
  
  // declaring destructor
  ~class_name()
  {
      cout<<"Destructor is called"<<endl;
      cout<<"Value of a: "<<a<<endl;
      cout<<"Value of b: "<<b<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    class_name obj(5,6);
    
    return 0;
}