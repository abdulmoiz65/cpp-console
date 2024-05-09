//#include<iostream>
//using namespace std;
//int main(){
//	int n1=3 , n2=5 , n3=5;
//	int *ptrn1, *ptrn2 ,*ptrn3;
//	cout << n1 << "\t" << n2 << "\t" << n3 << endl ;
//	cout << &n1 << "\t" << &n2 << "\t" << &n3 << endl;
//	ptrn1=&n1 ; ptrn2=&n2 ; ptrn3=&n3 ;
//	cout << ptrn1 << "\t" << ptrn2 << "\t" << ptrn3 << endl ;
//	cout << &ptrn1 << "\t" << &ptrn2 << "\t" << &ptrn3 << endl ;
//	cout << *ptrn1 << "\t" << *ptrn2 << "\t" << *ptrn3 << endl ;
//	cout << *&ptrn1 << "\t" << *&ptrn2 << "\t" << *&ptrn3 << endl ;
//	int **p1=&ptrn1 , **p2=&ptrn2 , **p3=&ptrn3 ;
//	cout << p1 << "\t" << p2 << "\t" << p3 << endl ;
//	cout << &p1 << "\t" << &p2 << "\t" << &p3 << endl ;			
//	cout << *&p1 << "\t" << *&p2 << "\t" << *&p3 << endl ;
//	cout << **&p1 << "\t" << **&p2 << "\t" << **&p3 << endl ;
//	cout << ***&p1 << "\t" << *&p2 << "\t" << ***&p3 << endl ;
//
//}
#include <iostream>
#include <string>
using namespace std;

const int MAX_SEATS = 200;
struct Passenger {
    string name;
    int age;
};
int main() {
    int numPassengers = 0;
    Passenger passengers[MAX_SEATS];
			cout << "Enter passenger details (or type 'q' to exit):" << endl;
	for (int i = 0; i < MAX_SEATS; i++) {
        cout << "Enter the name of passenger " << i + 1 << " (or 'q' to exit): ";
        cin >> passengers[i].name;

        if (passengers[i].name == "q") {
            break;}

        cout << "Enter the age of passenger " << i + 1 << ": ";
        cin >> passengers[i].age;

        numPassengers++;
    }
	cout << "Passengers with age less than 18:" << endl;
    for (int i = 0; i < numPassengers; i++) {
        if (passengers[i].age < 18) {
            cout << passengers[i].name << endl;}
    }
	return 0;
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//const int MAX_SEATS = 200;
//struct Passenger {
//    string name;
//    int age;
//int main 
