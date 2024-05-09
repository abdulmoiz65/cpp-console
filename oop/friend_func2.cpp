#include<iostream>
using namespace std;
class amir;
class asad;

class abdullah {
string house_no = "A2";
int sibling = 6;
friend void moiz(abdullah , amir , asad);

};

class amir{
    string house_no = "s45";
    int siblings = 4;
friend void moiz(abdullah , amir , asad);

};

class asad{
    string house_no = "n11";
    int siblings = 2;
friend void moiz(abdullah , amir , asad);
};

void moiz( abdullah r1 , amir r2 , asad r3){
    cout<<"friends info :"<<r1.house_no <<" "<<r2.house_no<<" "<<r3.house_no;
}

int main() {
     abdullah obj1;
     amir obj2;
     asad obj3;

moiz(obj1,obj2,obj3);

    return 0;
}