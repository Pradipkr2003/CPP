#include<iostream.h>
#include<conio.h>
class addition
{
	private:
		int a,b,c;
	public:
		void input()
		{
			cout<<"Enter First No :-";
			cin>>a;
			cout<<"Enter Second No :-";
			cin>>b;
			c=a+b;
		}
		void print()
		{
			cout<<"First No :-"<<a<<endl;
			cout<<"Second No :-"<<b<<endl;
			cout<<"Addition of Two No :- "<<c<<endl;

		}
};
void main()
	{
		addition add;
		add.input();
		clrscr();
		add.print();
		getch();
	}
