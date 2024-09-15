#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		cout << "base class constructor " << endl;
	}
};
class derived:public base
{
public:
	derived()
	{
		cout << "derived class cons";
	}
};
//void main()
//{
//	derived d;
//}