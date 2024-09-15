#include<iostream>
using namespace std;
class Student
{
	int id;
	string name;
public:
	void getStudent()
	{
		cout << "enter student id and name:" << endl;
		cin >> id >> name;
	}
};
class Marks :public Student
{
protected:
	int m, p, c;
public:
	void getMarks()
	{
		cout << "enter 3 subject marks " << endl;
		cin >> m >> p >> c;
	}
};
class Sports
{
protected:
	int smarks;
public:
	void getSports()
	{
		cout << "enter sports marks " << endl;
		cin >> smarks;
	}
};
class result :public Marks, public Sports
{
	float tot, avg;
public:
	void getResult()
	{
		tot = m + p + c;
		avg = tot / 3.0;
		cout << "Avg. Subject marks + Sports marks " << avg + smarks << endl;
	}
};
//void main()
//{
//	result r;
//	r.getStudent();
//	r.getMarks();
//	r.getSports();
//	r.getResult();
//}