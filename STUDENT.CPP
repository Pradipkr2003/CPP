#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int roll;
		char name[20];
		char add[20];
	public:
		void input()
		{
			cout<<"Enter Roll :- "; //print function same
			cin>>roll; //scanf function same
			cin.ignore(1); // fflush(stdin) same
			cout<<"Enter Name :-";
			cin.getline(name,20);    // gets()
			cout<<"Enter Address :-";
			cin.getline(add,20);
		}
		void print()
		{
			cout<<"Roll :- "<<roll<<endl;
			cout<<"Name :- "<<name<<endl;
			cout<<"Address :- "<<add<<endl;
		}
};
	void main()
	{
		student s1,s2;
		s1.input();
		s2.input();
		clrscr();
		s1.print();
		s2.print();
		getch();
	}