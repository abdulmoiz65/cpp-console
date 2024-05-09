#include <iostream>
using namespace std;

// funtion template 

template <class M>
 void function(M a , M b){
    cout<<a<<" "<<b<<endl;
};
template <class N>
    void function_b(N c , N d){
        N e;
        e=c+d;
        cout<<e;
        
    }
int main(){

function("moiz","abdulHafeez");
function(6,56);
function_b(6,56);


}