#include<iostream>
using namespace std;
class base
{
public:
	~base()
	{
		cout << "base class" << endl;
	}
};
class der :public base
{
public:
	~der()
	{
		cout << "derived class"<<endl;
	}
};
//void main()
//{
//	der d;
//}