#include<iostream.h>
#include<conio.h>
class Student
{
	private:
		static int count;
		int roll;
		char name[20];
	public:
		Student();
		void input();
		void print();
		static void Showcount();
};
Student::Student()
{
	roll=0;
	name[0]=NULL;
	count++;
	cout<<"\nCount ="<<count;
}
void Student::input()
{
	cout<<"Enter Name :-";
	cin.getline(name,20);
	cout<<"Enter Roll :-";
	cin>>roll;
}
void Student::print()
{
	cout<<"Name :-"<<name<<endl;
	cout<<"Roll :-"<<roll<<endl;
}
int Student::count=0;
void Student::Showcount()
{
	cout<<"\nTotal No of Obj :-"<<count;
}
void main()
{
	clrscr();
	Student s1,s2,s3,s4;
	Student::Showcount();
	getch();
}

