#include<iostream>
using namespace std;

template<class c>
class moiz{
    public:
    moiz(c a, c b){
        cout<<a<<" "<<b;
    }
};

int main(){
moiz<string> obj("MOIZ","HAFEEZ");


}