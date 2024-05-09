//#include <iostream>
//using namespace std;
//
//int main () {
//	
//	for(int r=1;r<=5;r++)
//
//		 {
//			for(int c=1;c<=5;c++)
//	 	  cout<<"X";
//		   cout<<endl;}
//	
//	
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main () {
//	
//	for(int r=1; r<=5 ; r++)
//	
//		{	for(int c=1; c<=5 ;c++)
//			if(r==1 || r==5 || c==1 || c==5 ) 
//			cout<<"X";
//		else	
//		cout<<"+";
//		cout<<endl;}
//	 
//	 
//	 return 0;
//	 }
	 

	 
	 

	 
//	 #include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    int num1=0;
//    int num2=1;
//    int result=0;
//
//    cout << "Enter the number of terms: ";
//    cin >> n;
//
//    cout << "Fibonacci Series: ";
//
//    for (int i = 1; i <= n; ++i) {
//        // Prints the first two terms.
//        if(i == 1) {
//            cout << num1 << "  ";
//            continue;
//        }
//        if(i == 2) {
//            cout << num2 << "  ";
//            continue;
//        }
//        result= num1 + num2;
//        num1 = num2;
//        num2 = result;
//        
//        cout << result <<"  ";
//    }
//    return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int n;
	int num1=0;
	int num2=1;
	int result=0;
	cout<<"enter number:";
	cin>>n;
	
	for(int i=1;i<=n;i++){
	
		if(i==1)
		{ cout<<num1<<"  ";
		continue;}
		
		if(i==2)
		{cout<<num2<<"  ";
		continue;}
		
		result=num1+num2;
		num1=num2;
		num2=result;
		
		cout<<result<<"  ";}
		
	
}









	 
	 
