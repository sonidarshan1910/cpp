#include<iostream.h>
#include<conio.h>

class box
{
	public:
		float length;
		float breath;
		float height;
};
	int main()
	{
		box box1;
		box box2;
		float volume;
		clrscr();

		box1.length = 5;
		box1.breath = 4;
		box1.height = 7;

		box2.length = 6;
		box2.breath = 5;
		box2.height = 10;

		volume = box1.length * box1.breath * box1.height;
		cout<<"Volume of box1 :"<<volume<<"\n";

		volume = box2.length * box2.breath * box2.height;
		cout<<"Volume of box2 :"<<volume<<"\n";

		return 0;
	}

