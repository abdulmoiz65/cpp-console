#include<iostream>
using namespace std;

class BANK_ACCOUNT{
	public:
		string name;
		int Acc_no;
		string Acc_type;
		int balance;
		
		
	void details(){
		cout<<"ENTER YOUR NAME :";
			cin>>name;
		cout<<"ENTER YOUR ACCOUNT NUMBER :";
			cin>>Acc_no;
		cout<<"ENTER YOUR ACCOUNT TYPE :";
			cin>>Acc_type;
		cout<<"ENTER YOUR BALANCE AMOUNT : ";
			cin>>balance;
	}
	
	void Deposit_func(){
		int depo;
		cout<<"Enter amount that you want to deposit  ";
		cin>>depo;
		if (depo > 100000){
			cout<<"please deposit less than 100000 or in installment !  ";
		}
		else{
			cout<<"DEPOSIT SUCCESSFULLY ! "<<endl;
		}
		balance=balance+depo;
		}

	void withdraw_func(){
		int wd;
		cout<<"Enter amount that you want to withdraw  ";
		cin>>wd;
		if(wd>balance){
			cout<<"You dont have enough balance  ";
		}
		else{
			cout<<"WITHDRAW SUCCESSFULLY !"<<endl;
		}
		balance=balance-wd;
	}

	void check_bal(){
		cout<<name<<" your current balance is "<<balance <<endl;
	}
};

int main(){
	
	    int choice;
    string ans;
    BANK_ACCOUNT account;

    account.details();

    Remenu:
    cout << "Menu" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl; 
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            account.Deposit_func();
            break;
        case 2:
            account.withdraw_func();
            break;
        case 3:
            account.check_bal();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
    }

    cout << "If you want to see the Menu again, Enter Y." << endl;
    cout << "Your Answer: ";
    cin >> ans;

    if (ans == "Y" || ans == "y") {
        goto Remenu;
    } else {
        exit(0);
    }
	
	return 0;
}
