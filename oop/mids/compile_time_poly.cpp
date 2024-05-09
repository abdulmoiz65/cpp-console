#include<iostream>
using namespace std;

class A{
	public:
	int ADD(int a , int b){
        cout<<"int function" <<endl;
		return a+b;
	}
	double ADD(double a , double b){
        cout<<"double function  "<<endl;
		return a+b;
	}
};
	


int main(){
    A obj;
    cout<<obj.ADD(5,10)<<endl;
    cout<<obj.ADD(5.4,10.5)<<endl;



    return 0;
}