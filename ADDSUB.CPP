#include<iostream.h>
#include<conio.h>

class box
{
	public:
		int num1;
		int num2;
		int num3;
		int addition;
		int subtraction;

		void calculation(int n1,int n2,int n3)
		{
			num1 = n1;
			num2 = n2;
			num3 = n3;
		}
		void displayAddition()
		{
			addition=num1+num2+num3;
			cout<<"\nAddition is :"<<addition;
		}
		void displaySubtraction()
		{
			subtraction=num1-num2-num3;
			cout<<"\nSubtraction is :"<<subtraction;
		}
};
	int main()
	{
		box b1;
		clrscr();

		b1.calculation(60,47,19);
		b1.displayAddition();
		b1.displaySubtraction();

		return 0;
	}