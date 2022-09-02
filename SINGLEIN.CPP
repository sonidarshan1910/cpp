#include<iostream.h>
#include<conio.h>

class Teacher
{
	public:
		int id;
		char Tname;
};

class Student:public Teacher
{
	public:
		int rollno;
		char Sname;
};

	int main()
	{
		Student s1;
		clrscr();

		s1.id=1483;
		s1.Tname='T';
		s1.rollno=59;
		s1.Sname='S';

		cout<<"\n"<<s1.id;
		cout<<"\n"<<s1.Tname;
		cout<<"\n"<<s1.rollno;
		cout<<"\n"<<s1.Sname;

		return 0;
	}
