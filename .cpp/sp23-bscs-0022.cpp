/*MINI PROJECT 
			STUDENT NAME: ABDUL MOIZ 
			STUDENT ID: SP23-BSCS-0022*/

#include <iostream>
using namespace std;
int main () {
	int N;
	
	cout<<"Enter any number b/w 1 to 100 : ";
	cin>>N;
	cout<<"Roman equivalent :   ";
	
			if( N < 1 || N > 100)
			cout<<"N/A ";
	
	while ( N >= 100 )
	{cout<< "C";
	N-=100;}
	
	while ( N >= 90 )
	{cout<< "XC";
	N-=90;}
	
	while ( N >= 50 )
	{cout<< "L";
	N-=50;}
	
	while ( N >= 40 )
	{cout<< "XL";
	N-=40;}
	
	while ( N >= 10 )
	{cout<< "X";
	N-=10;}
	
	while ( N >= 9 )
	{cout<< "IX";
	N-=9;}
	
	while ( N >= 5 )
	{cout<< "V";
	N-=5;}
	
	while ( N >= 4 )
	{cout<< "IV";
	N-=4;}
	
	while ( N >= 1 )
	{cout<< "I";
	N-=1;}
	
	
	return 0;
	}
