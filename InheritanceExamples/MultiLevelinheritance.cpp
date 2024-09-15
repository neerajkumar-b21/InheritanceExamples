#include<iostream>
using namespace std;
class Student
{
	int id;
	string name;
public:
	void getStudent()
	{
		cout << "enter student id and name";
		cin >> id >> name;
	}
	void display()
	{
		cout << "ID is " << id << endl;
		cout << "Name is " << name << endl;
	}
};
class Marks:public Student
{
protected:
	int m1, m2, m3;
public:
	void getMarks()
	{
		cout << "enter 3 subject marks ";
		cin >> m1 >> m2 >> m3;
	}
	void displayM()
	{
		cout << " m1 marks are : " << m1 << endl;
		cout << " m2 marks are : " << m2 << endl;
		cout << " m3 marks are : " << m3 << endl;
	}
};
class result :public Marks
{
	int tot;
	float avg;
public:
	void gettot()
	{
		tot = m1 + m2 + m3;
		avg = tot / 3.0;
		cout << "total marks are " << tot << endl;
		cout << "avg marks are " << avg << endl;
	}
};
//void main()
//{
//	result r;
//	r.getStudent();
//	r.display();
//	r.getMarks();
//	r.displayM();
//	r.gettot();
//}