#include<iostream.h>
#include<conio.h>

	int main()
	{
		int n,i,t1=2,t2=1,tn;
		cout<<"Enter the number of terms in lucas series:";
		cin>>n;

		if(n==1)
			cout<<"\n"<<2<<"\n";
		else if(n==2)
			cout<<"\n"<<2<<"\n";
		else if(n>2)
		{
			cout<<"lucas series for"<<n<<"terms is:"<<"\n"<<t1<<"\n"<<t2<<"\n";
			for(i=0;i<n-2;i++)
			{
				tn=t1+t2;
				cout<<tn<<"\n";
				t2=tn;
			}
		}
			return 0;
	}