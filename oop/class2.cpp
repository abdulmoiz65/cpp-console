// FirstCode
// copy by gc
#include<iostream>
using namespace std;
 
class Student
{
    //data members
   private: short age;
   
    public:string name;
    //member function
     void studentinfo(string name)
    {
        cout<<name;
    }
};
main()
{
Student student1;
student1.studentinfo("Ali");
   
}