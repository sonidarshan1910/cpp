#include<iostream.h>
#include<conio.h>

	int main()
	{
		int i=10;
		clrscr();

		do
		{
			if(i==15)
			{
				i++;
				continue;
			}
			cout<<"\nValue of i: "<<i;
			i++;
		}
		while(i<20);

			return 0;
	}