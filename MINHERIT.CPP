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
class Employee
{
		int no;
		char post[20],desig[20];
		float sallery;
		public:
		Employee();
		Employee(int no, char po[],char des[],float sal);
		Employee(Employee &e);
		void input();
		void print();
};
	Employee::Employee()
	{
		no=0;
		post[0]=NULL;
		desig[0]=NULL;
		sallery=0;
	}
	Employee::Employee(int n,char po[], char des[],float sal)
	{
		no=n;
		sallery=sal;
		strcpy(post,po);
		strcpy(desig,des);
	}
	Employee::Employee(Employee &e)
	{
		no=e.no;
		sallery=e.sallery;
		strcpy(post,e.post);
		strcpy(desig,e.desig);
	}

	void Employee::input()
	{
		cout<<"Enter Id of Person:-";
		cin>>no;
		cout<<"Enter Sallery :=";
		cin>>sallery;
		cin.ignore(1);
		cout<<"Enter Post:-";
		cin.getline(post,20);
		cout<<"Enter Designation:-";
		cin.getline(desig,20);
	}
	void Employee::print()
	{
		cout<<"Id :-"<<no<<endl;
		cout<<"Post :-"<<post<<endl;
		cout<<"Designation :-"<<desig<<endl;
		cout<<"Sallery :-"<<sallery<<endl;
	}
class Manager:public Person,public Employee
{
	private:
		char power;
		int incentive;
	public:
		Manager();
		Manager(int i,char nm[],char ad[],int no,char po[],char des[],char pow[],int inc);
		Manager(Manager &m);
		void input();
		void print();
};
Manager::Manager()
{
	Person::Person();
	Employee::Employee();
	power =NULL;
	incentive=0;
}
Manager::Manager(int i,char nm[],char ad[],int no,char po[],char des[],char pow[],int inc)
{
	Person::Person(i,nm,ad);
	Employee::Employee(n,po,des);
	strcpy(power,po);
	incentive=inc;
}
Manager::Manager(Manager &m)
{
	m.Person::Person(&p);
	m.Employee::Employee(&m);
	strcpy(power,m.power);
	incentive=m.incentive;
}
void Manager::input()
{
	Person::input();
	Employee::input();
	cout<<"Enter Incentive of Manager :-";
	cin>>incentive;
	cin.ignore(1);
	cout<<"Enter Power of Manager :-";
	cin.getline(power,20);
}
void Manager::print()
{
	Person::print();
	Employee::print();
	cout<<"Incentive of Manager="<<incentive<<endl;
	cout<<"Power of Manager ="<<power<<endl;
}
void main()
{
	Manager m;
	m.input();
	clrscr();
	m.print();
	getch();
}


