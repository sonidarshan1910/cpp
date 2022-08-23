#include<iostream.h>
#include<conio.h>

	void swap(int x,int y);

	int main()
	{
		int a=25;
		int b=50;
		clrscr();

		cout<<"Before swapping value of a is "<<a;
		cout<<"Before swapping value of b is "<<b;

		swap(a,b);

		cout<<"After swapping value of a is "<<a;
		cout<<"After swapping value of b is "<<b;

		return 0;
	}

