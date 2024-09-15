#include<iostream>
using namespace std;
//Single level inheritance.where derived class can access base class in public or private mode
class Student
{
private:
	int id;
	string name;
public:
	void get()
	{
		cout << "enter id and name";
		cin >> id >> name;
	}
	void display()
	{
		cout << "ID is " << id << endl;
		cout << "Name is " << name << endl;
	}
};
class phy:private Student
//class phy :public Student
{
private:
	float h, w;
public:
	void getp()
	{
		get();//accessed in derived class mem func and not requred to access if public mode
		cout << "enter height and weight ";
		cin >> h >> w;
	}
	void displayp()
	{
		display();//accessed in derived class mem func and not requred to access if public mode
		cout << "height is " << h << endl;
		cout << "weight is " << w << endl;
	}
};
//void main()
//{
//	phy p;
//	//p.get();
//	p.getp();
//	//p.display();
//	p.displayp();
//}