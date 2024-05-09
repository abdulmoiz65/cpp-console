#include <iostream>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	
	int sum=0, fac=0 ,n2=0 ,rem;
	
	n2 = n;
	while(n2!=0)
	{
		rem = n2%10;
		n2 /= 10;
		fac = 1;
		for(int i=1 ; i<=rem ; i++)
			fac *= i;
		sum += fac;	
	}
	if (sum==n)
		cout<<"Strong Number";
	else
		cout<<"Normal Number";
	
	return 0;}
