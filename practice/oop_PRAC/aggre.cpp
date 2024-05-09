#include<iostream>
using namespace std;

// Aggregation example
class engine {
public:
    int a;

    engine() {
        cout << "Engine";
    }
};

class car {
public:
    engine* obj; // Aggregation using a pointer

    // Constructor for the car class
    car()
    {
       
    }

    // Destructor to release the allocated memory
    ~car() {
        delete obj; // Deallocate memory for obj
    }
};

main() {
    car *obj2=new car();
    //obj2.obj->a = 5;
    obj2->obj->a=5; // Use -> to access members of the pointed object
cout<<obj2->obj->a;
    // Rest of your code

    delete obj2;
}