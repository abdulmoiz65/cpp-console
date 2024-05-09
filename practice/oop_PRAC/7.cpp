#include<iostream>
using namespace std;

template <class T>
T getinput(){
    T x;
    cin>>x;
    return x;
}

int main() {
     int x;
     x = getinput<int>();
     float y ;
     y = getinput<float>();

cout<<" x  = "<<x<<" y  = "<<y;
    return 0;
}