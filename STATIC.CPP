#include<iostream.h>
#include<conio.h>
class Student
{
	int roll;
	char name[20];
	static int count;
	public:
	 void input();
	 void print();
	 Student();
	 static void showcount();
      /* Student()
	{
		name[0]=NULL;
		roll=0;
		count++;
	}
	void input()
	{
		cout<<"Enter Name :-";
		cin.getline(name,20);
		cout<<"Enter Roll :-";
		cin>>roll;
	}
	void print()
	{
		cout<<"Name :-"<<name<<endl;
		cout<<"Roll :-"<<roll;
	}
       static void showcount()
	{
		cout<<"Total No of Instance ="<<cout;
	}     */

	Student::Student()
	{
		roll=0;
		name[0]=NULL;
		count++;
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
		cout<<"Roll :-"<<roll;
	}
	Student::count=0;
       void Student::showcount()
	{
		cout<<"Total No of Instance ="<<cout;
	}
};
void main()
{
	Student s1,s2,s3,s4;
	Student::showcount();
	getch();
}




