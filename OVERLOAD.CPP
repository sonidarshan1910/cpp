#include<iostream.h>
#include<conio.h>

class Box
{
	public:
		double getVolume(void)
		{
			return length * breadth * height;
		}

		void setLength(double len)
		{
			length = len;
		}

		void setBreadth(double bre)
		{
			breadth = bre;
		}

		void setHeight(double hei)
		{
			height = hei;
		}

		Box operator+(const Box& b)
		{
			Box b1;
			b1.length=this->length+b.length;
			b1.breadth=this->breadth+b.breadth;
			b1.height=this->height+b.height;

			return b1;
		}

		private:
			double length;
			double breadth;
			double height;
};

	int main()
	{
		Box box1;
		Box box2;
		Box box3;
		double volume=0;
		clrscr();

		box1.setLength(5);
		box1.setBreadth(8);
		box1.setHeight(9);

		box2.setLength(15);
		box2.setBreadth(12);
		box2.setHeight(14);

		volume = box1.getVolume();
		cout<<"\nVolume of box1 :"<<volume;

		volume = box2.getVolume();
		cout<<"\nVolume of box2 :"<<volume;

		box3 = box1+box2;

		volume = box3.getVolume();
		cout<<"\nVolume of box3 :"<<volume;

		return 0;
	}

