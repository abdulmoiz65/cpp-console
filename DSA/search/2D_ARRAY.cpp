#include<iostream>
using namespace std;

int main() {

int array[3][4]={
    {1,2,5,4},
    {1,2,3,4},
    {1,2,3,4}
};


for(int i = 0 ; i <3 ; i++ ){
    for(int j = 0 ; j <4 ; j++ ){
        cout<<array[i][j];
    }
    cout<<endl;
}



    return 0;
}
