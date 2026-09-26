#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	private:
		int roll;
		char name[20],add[20];
	public:
	Student()  //default constructor
	{
		roll=0;
		name[0]=NULL;
		add[0]=NULL;
	}
	Student(int rl,char nm[],char ad[])    //parameterised constructor
	{
		roll=rl;
		strcpy(name,nm);
		strcpy(add,ad);
	}
	Student(Student &s)       //copy constructor
	{
		roll=s.roll;
		strcpy(name,s.name);
		strcpy(add,s.add);
	}
	~Student()
	{
		delete name;
		delete add;
	}
	void print()
	{
		cout<<"Student Roll :-"<<roll<<endl;
		cout<<"Student Name :-"<<name<<endl;
		cout<<"Student Address :-"<<add<<endl;
	}
};
void main()
{
	Student s,s1(3,"pradip","gaya"),s2=s1;
	clrscr();
	s.print();
	s1.print();
	s2.print();
	getch();
}

