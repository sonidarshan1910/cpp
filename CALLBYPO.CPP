#include<iostream.h>
#include<conio.h>

	int swap(int *a,int *b)
	{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;

		return temp;
	}
	int main()
	{
		int x = 100;
		int y = 200;
		clrscr();

		cout<<"\nBefore swap,value of x is "<<x;
		cout<<"\nBefore swap,value of b is "<<y;

		swap(&x,&y);

		cout<<"\nAfter swap,value of a is "<<x;
		cout<<"\nAfter swap,value of b is "<<y;

		return 0;
	}