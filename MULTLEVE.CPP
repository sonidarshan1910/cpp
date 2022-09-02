#include<iostream.h>
#include<conio.h>

class Line
{
	public:
		void show()
		{
			cout<<"\nTypes of line";
		}
};

class Horizontal:public Line
{
	public:
		void full()
		{
			cout<<"\nHorizontal line is in full page";
		}
};

class Vertical:public Horizontal
{
	public:
		void half()
		{
			cout<<"\nVertical line is in half page";
		}
};

	int main()
	{
		Vertical v1;
		clrscr();

		v1.show();
		v1.full();
		v1.half();

		return 0;
	}
