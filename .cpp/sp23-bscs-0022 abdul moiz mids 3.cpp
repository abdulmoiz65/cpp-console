//odd numbers

#include<iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    
    for (int i=1; i<=N; i+=2) 
	{
        if (i % 7 == 0) {
            cout<<i<<" ";
        }
    }
    
    return 0;
}
