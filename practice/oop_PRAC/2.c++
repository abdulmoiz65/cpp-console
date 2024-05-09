// obj stored 1 byte in memory thats why when we just print the obj of 
// empty class it gives us the output (1 "ONE")

#include <iostream>
using namespace std;

class moiz{
};

int main(){
moiz obj;
cout<<sizeof(obj);
    return 0;
}