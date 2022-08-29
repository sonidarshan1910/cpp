#include<iostream.h>
#include<conio.h>

class book
{
	public:
		int id;
		char name;
		float price;
		char author;
};
	int main()
	{
		book b1;
		book b2;
		clrscr();

		b1.id = 2885;
		b1.name = 'H';
		b1.price = 500;
		b1.author = 'J';

		b2.id = 5930;
		b2.name = 'C';
		b2.price = 750;
		b2.author = 'D';

		cout<<"Book id :"<<b1.id<<"\n";
		cout<<"Book name :"<<b1.name<<"\n";
		cout<<"Book price :"<<b1.price<<"\n";
		cout<<"Book author :"<<b1.author<<"\n";

		cout<<"\n";

		cout<<"Book id :"<<b2.id<<"\n";
		cout<<"Book name :"<<b2.name<<"\n";
		cout<<"Book price :"<<b2.price<<"\n";
		cout<<"Book author :"<<b2.author<<"\n";

		return 0;
	}