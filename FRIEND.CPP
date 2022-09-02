#include<iostream.h>
#include<conio.h>

class Box
{
	double width;

	public:
		friend void printWidth(Box b1);
		void setWidth(double wid);
};

	void Box::setWidth(double wid)
	{
		width = wid;
	}

	void printWidth(Box b1)
	{
		cout<<"Width of box : "<<b1.width;
	}

	int main()
	{
		Box b1;
		clrscr();

		b1.setWidth(36);

		printWidth(b1);

		return 0;
	}