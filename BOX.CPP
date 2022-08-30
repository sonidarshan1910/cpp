#include<iostream.h>
#include<conio.h>

class Box
{
	public:
		float length;
		float height;
		float breadth;
		int volume;

		void calculation(float l,float h,float b)
		{
			length = l;
			height = h;
			breadth = b;
		}
		void displayvolume()
		{
			volume=length*height*breadth;
			cout<<"Volume is : "<<volume;
		}
};

		int main()
		{
			Box b1;
			clrscr();

			b1.calculation(23,44,20);
			b1.displayvolume();

		return 0;
	}
