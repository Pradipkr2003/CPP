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
void main()
{
	Person *s;
	s=new Person();
	s->input();
	s->print();
	getch();
}