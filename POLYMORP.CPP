#include<iostream.h>
#include<conio.h>

class Shape
{
	protected:
		int width,height;

	public:
		Shape(int a=0,int b=0)
		{
			width=a;
			height=b;
		}

		int area()
		{
			cout<<"\nArea is : "<<width * height;
			return width * height;
		}
};

class Rectangle:public Shape
{
	public:
		Rectangle(int a=0,int b=0):Shape(a,b){}

		int area()
		{
			cout<<"\nRectangle class area : "<<width * height;
			return (width * height);
		}
};

class Triangle:public Shape
{
	public:
		Triangle(int a=0,int b=0):Shape(a,b){}

		int area()
		{
			cout<<"\nTriangle class area : "<<(width * height)/2;
			return (width * height)/2;
		}
};

	int main()
	{
		Shape *s1;
		Rectangle rec(19,6);
		Triangle tri(26,12);
		clrscr();

		s1 = &rec;

		s1->area();

		s1 = &tri;

		s1->area();

		return 0;
	}