#include<iostream>
using namespace std;

class oop{
	protected:
	string name;
};
    class direct:public oop{
        public:
          void set_name(string fname){
            name = fname;  

           }

           string get_name(){
            return name;
           }
    };



int main(){

direct a;
a.set_name("moiz");
cout<<"your name : "<<a.get_name();

    return 0;
}