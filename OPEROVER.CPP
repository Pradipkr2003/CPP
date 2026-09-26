#include<iostream.h>
#include<conio.h>
class Integer
{
	private:
		int data;
	public:
		Integer()
		{
			data=0;
		}
		Integer(int n)
		{
			data=n;
		}
		Integer(Integer &N)
		{
			data=N.data;
		}
		void input()
		{
			cin>>data;
		}
		void print()
		{
			cout<<data;
		}
		Integer operator + (Integer &N)
		{
			Integer x;
			x.data=data+N.data;
			return x;
		}
		int operator > (Integer &N)
		{
			return data>N.data;
		}
		int operator >= (Integer &N)
		{
			return data>=N.data;
		}
};
void main()
{
	Integer a=10,b=20,c;
	clrscr();
	c=a+b;
	c.print();
	if(a>b)
	{
		cout<<"Bigger No =";
		a.print();
	}
	else
	{
		cout<<"Bigger No =";
		b.print();
	}
	getch();
}

