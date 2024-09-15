#include<iostream>
using namespace std;
class Account
{
	int ano;
	string name;
public:
	void getacc()
	{
		cout << "enter acc no and name : " << endl;
		cin >> ano >> name;
	}
	void displayAcc()
	{
		cout << "ACC No is: " << ano << endl;
		cout << "Name is : " << name << endl;
	}
};
class Saving :public Account
{

	float bal;
public:
	void getBal()
	{
		cout << "enter Balance : " << endl;
		cin >> bal;
		if (bal < 500)cout << "minimum balance should be 500";
		else cout << "account created";
	}
};
class Current :public Account
{
	float bal;
public:
	void getBal()
	{
		cout << "enter Balance : " << endl;
		cin >> bal;
		if (bal < 1000)cout << "minimum balance should be 1000";
		else cout << "account created";
	}
};
//void main()
//{
//	int op;
//	cout << "1.Savings Account" << endl;
//	cout << "2.Current Account" << endl;
//	cout << "Enter ur option " << endl;
//	cin >> op;
//	if (op == 1)
//	{
//		Saving s;
//		s.getacc();
//		s.getBal();
//	}
//	else if (op == 2)
//	{
//		Current c;
//		c.getacc();
//		c.getBal();
//	}
//
//}