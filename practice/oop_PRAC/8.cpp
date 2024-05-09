#include<iostream>
using namespace std;

template <class T , class U>
T my_cast(U u){
    return(T)u;
}

int main() {
     double d = 10.7899;
     int j = my_cast<float>(d);
     int i = my_cast<int>(d);
     cout<<i<<" "<<j;
    return 0;
}