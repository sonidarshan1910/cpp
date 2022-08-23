#include<iostream.h>
#include<conio.h>

	int main()
	{
		int a=20;
		clrscr();

		do
		{
			cout<<"\nValue of a is: "<<a;
			a++;

			if(a>30)
			{
				break;
			}
		}
			while(a<40);

			return 0;
	}