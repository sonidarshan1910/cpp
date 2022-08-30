#include<iostream.h>
#include<conio.h>

class Employee
{
	public:
		int id;
		char name;
		char city;
		float salary;
		char des;

		void insertRecord(int i,char nm,char ct,float sal,char ds)
		{
			id = i;
			name = nm;
			city = ct;
			salary = sal;
			des = ds;
		}

		void displayRecord()
		{
			cout<<"\n\nEmployee Details\n";

			cout<<"\nEmployee ID : "<<id;
			cout<<"\nEmployee Name : "<<name;
			cout<<"\nEmployee City : "<<city;
			cout<<"\nEmployee Salary : "<<salary;
			cout<<"\nEmployee Designation : "<<des;
		}
};

		int main()
		{
			Employee e1;
			Employee e2;
			clrscr();

			e1.insertRecord(1001,'A','M',11000,'P');
			e2.insertRecord(1002,'B','D',12000,'M');

			e1.displayRecord();
			e2.displayRecord();

		return 0;
		}