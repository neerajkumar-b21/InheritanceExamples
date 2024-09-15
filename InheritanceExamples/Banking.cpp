#include<iostream>-*
using namespace std;
class customer
{
protected:
	int accno;
	float balance;
	string name;
public:
	void getAccountInfo()
	{
		cout << "enter account number " << endl;
		cin >> accno;
		cout << "enter account holder name" << endl;
		cin >> name;
		cout << "enter Balance" << endl;
		cin >> balance;
	}
};
class cashier:public customer
{
	int amount;
public:
	void Deposit()
	{
		cout << "enter amount to deposit" << endl;
		cin >> amount;
		balance = balance + amount;
	}
	void withdraw()
	{
		cout << "enter amount to withdraw" << endl;
		cin >> amount;
		if (amount <= balance)
		{
			balance = balance - amount;
		}
		else
		{
			cout << "Insufficient Balance" << endl;
		}
	}
};
class Bank :public cashier
{
public:
	void displayBalance()
	{
		cout << "Acc. no is " << accno << endl;
		cout << "account holder name is " << name << endl;
		cout << "Account balance is " << balance << endl;
	}
};
void main()
{
	int option;
	char ans;
	Bank b;
	b.getAccountInfo();
	do
	{
		cout << "Enter 1 to Deposit amount" << endl;
		cout << "Enter 2 to withdraw amount" << endl;
		cout << "Enter 3 to Display Account Balance" << endl;
		cin >> option;
		switch (option)
		{
		case 1:b.Deposit();
			break;
		case 2:b.withdraw();
			break;
		case 3:b.displayBalance();
			break;
		default:cout << "Invalid option, Please try again" << endl;
			break;
		}
		cout << "Do you want to continue then Press Y or to Exit press N " << endl;
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
}