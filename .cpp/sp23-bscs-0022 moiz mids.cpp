//find sequence

#include<iostream>
using namespace std;

int main(){
	int N;
	cout<<"enter number:";
	cin>>N;
	
	int num1=1;
	int num2=1;
	int result=0;
	
	cout<<"sequence :  ";
	
	for(int i=1 ; i<=N ; i++)
	{	
		if(i==1)
		{cout<<num1<<" ";
		continue;}
		

	result=num1+num2;
	num2=num1;
	num1=result;
	 cout<<result<<" "; }
}

