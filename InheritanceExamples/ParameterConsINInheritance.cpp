#include<iostream>
using namespace std;
class Student
{
protected:
	string name, course;
public:
	Student()
	{

	}
	Student(string name, string course)
	{
		this->name = name;
		this->course = course;
	}
	void display()
	{
		cout << "Name " << name << endl;
		cout << "Course " << course << endl;
	}
};
class marks :public Student
{
	int m, p, c;
public:
	marks(string name, string course, int m, int p, int c)
	{
		Student::Student(name, course);
		this->name = name;
		this->course = course;
		this->m = m;
		this->p = p;
		this->c = c;
	}
	void disMar()
	{
		cout << m << endl << p << endl << c;
	}
};
//void main()
//{
//	marks m("kumar", "MPC", 56, 78, 97);
//	m.display();
//	m.disMar();
//}