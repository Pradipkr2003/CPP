#include<iostream.h>
#include<conio.h>
class Person
{
	protected:
	int id;
	char name[20],add[20];
	public:
     virtual void input()= 0;
       virtual	void print()= 0;
};
class Student : public Person
{
	int roll;
	char course[20];
	char session[10];
   public:
       void input();
       void print();
};
void Student::input()
{
	cout<<"Enter Id :-";
	cin>>id;
	cout<<"Enter Roll:-";
	cin>>roll;
	cin.ignore(1);
	cout<<"Enter Name :-";
	cin.getline(name,20);
	cout<<"Enter Address :-";
	cin.getline(add,20);
	cout<<"Enter Course:-";
	cin.getline(course,20);
	cout<<"Enter Session:-";
	cin.getline(session,10);
}
void Student::print()
{
	cout<<"Id :-"<<id<<endl;
	cout<<"Roll:-"<<roll<<endl;
	cout<<"Name :-"<<name<<endl;
	cout<<"Address :-"<<add<<endl;
	cout<<"Course:-"<<course<<endl;
	cout<<"Session:-"<<session<<endl;
}
void main()
{
	Student s;
	s.input();
	s.print();
	getch();
}