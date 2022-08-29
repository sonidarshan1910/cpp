#include<iostream.h>
#include<conio.h>

class student
{
	public:
		char name;
		int rollno;
		char city;
		float fees;
};
	int main()
	{
		student s1;
		student s2;
		clrscr();

		s1.name='D';
		s1.rollno=20;
		s1.city='A';
		s1.fees=20000.00;

		s2.name='R';
		s2.rollno=12;
		s2.city='A';
		s2.fees=25000.00;

		cout<<"Student name :"<<s1.name<<"\n";
		cout<<"Student rollnumber :"<<s1.rollno<<"\n";
		cout<<"Student city :"<<s1.city<<"\n";
		cout<<"Student fees :"<<s1.fees<<"\n";

		cout<<"\n";

		cout<<"Student name :"<<s2.name<<"\n";
		cout<<"Student rollnumber :"<<s2.rollno<<"\n";
		cout<<"Student city :"<<s2.city<<"\n";
		cout<<"Student fees :"<<s2.fees<<"\n";

		return 0;
	}