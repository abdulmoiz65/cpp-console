#include<iostream>
using namespace std;

int main(){

int array[][5] = {
    {1,3,4,5,6,},
    {1,3,4,5,6,},
    {1,3,4,5,6,},
    {1,3,4,5,6,}
};

for(int i = 0 ; i < 4 ; i++){
    for(int j = 0 ; j < 5 ; j++){
        cout << array[i][j] << " ";
    }
    cout<<endl;
}

}