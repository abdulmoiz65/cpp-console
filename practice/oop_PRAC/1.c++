#include <iostream>
using namespace std;

class moiz{
int a = 15;

friend void function(moiz);

};

void function(moiz r1){
cout<<r1.a;    
}

int main(){
moiz obj;
function(obj);

}