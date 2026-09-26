#include<iostream.h>
#include<conio.h>
class Student
{
	private:
		int roll;
		char name[20],classs[20],add[20];
	public:
		void input()
		{
			cout<<"Enter Roll:-";
			cin>>roll;
			cin.ignore(1);
			cout<<"Enter Name :-";
			cin.getline(name,20);
			cout<<"Enter Address:-";
			cin.getline(add,20);
			cout<<"Enter Class:-";
			cin.getline(classs,20);
		}
		void print()
		{
			cout<<"Roll:-"<<roll<<endl;
			cout<<"Name :-"<<name<<endl;
			cout<<"Address:-"<<add<<endl;
			cout<<"Class:-"<<classs<<endl;
		}
};
class Test :virtual public Student
{
	private:
		int tmarks;
		char sub[20];
	public:
	      void input()
	      {
		Student::input();
		cout<<"Enter Test Marks :-";
		cin>>tmarks;
		cin.ignore(1);
		cout<<"Enter Subject :-";
		cin.getline(sub,20);
		}
		void print()
		{
			Student::print();
			cout<<"Subject :-"<<sub<<endl;
			cout<<"Test Marks :-"<<tmarks<<endl;
		}
};
class Sports :virtual public Student


{
	private:
		int smarks,rank;
	public:
		void input()
		{
			//Student::input();
			cout<<"Enter Sports Marks :-";
			cin>>smarks;
			cout<<"Enter Rank :-";
			cin>>rank;
		}
		void print()
		{
			Student::print();
			cout<<"Sports Marks :-"<<smarks<<endl;
			cout<<"Rank :-"<<rank<<endl;
		}
};
class Result :public Test, public Sports
{
	public:
		void input()
		{
			Test::input();
			Sports::input();
		}
	       void print()
	       {
			Test::print();
			Sports::print();
	       }
};
void main()
{
	Result r;
	r.input();
	clrscr();
	r.print();
	getch();
}