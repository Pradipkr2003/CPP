#include<iostream.h>
#include<conio.h>
#include<string.h>
class Person
{
	int id;
	char name[20],add[20];
	public:
	Person();
	Person(int i, char nm[],char ad[]);
	Person(Person &p);
	void input();
	void print();
};
Person::Person()
{
	id=0;
	name[0]=NULL;
	add[0]=NULL;
}
Person::Person(int i,char nm[], char ad[])
{
	id=i;
	strcpy(name,nm);
	strcpy(add,ad);
}
Person::Person(Person &p)
{
	id=p.id;
	strcpy(name,p.name);
	strcpy(add,p.add);
}
void Person::input()
{
	cout<<"Enter Id of Person:-";
	cin>>id;
	cin.ignore(1);
	cout<<"Enter Name:-";
	cin.getline(name,20);
	cout<<"Enter Address:-";
	cin.getline(add,20);
}
void Person::print()
{
	cout<<"Id :-"<<id<<endl;
	cout<<"Name :-"<<name<<endl;
	cout<<"Address :-"<<add<<endl;
}
class Student : public Person
{
	int roll;
	char course[20];
	char session[10];
   public:
       Student();
       Student(int i, char nm[], char ad[], int rl,char c[], char s[]);
       Student(Student &s);
       void input();
       void print();
};
Student::Student()
{
	Person();
	roll=0;
	course[0]=NULL;
	session[0]=NULL;
}
Student::Student(int i,char nm[], char ad[], int rl, char c[], char s[])
{
	Person(i,nm,ad);
	roll=rl;
	strcpy(course,c);
	strcpy(session,s);
}
void Student::input()
{
	Person::input();
	cout<<"Enter Roll:-";
	cin>>roll;
	cin.ignore(1);
	cout<<"Enter Course:-";
	cin.getline(course,20);
	cout<<"Enter Session:-";
	cin.getline(session,10);
}
void Student::print()
{
	Person::print();
	cout<<"Roll:-"<<roll<<endl;
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