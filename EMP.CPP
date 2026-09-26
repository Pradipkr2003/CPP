#include<iostream.h>
#include<conio.h>
class employee
{
	private:
		int code;
		char dept[10],name[10],desig[10];
		float basicsallery;
	public:
		void input()
		{
			cout<<"Enter Employee Code :-";
			cin>>code;
			cout<<"Enter Basic Sallery :-";
			cin>>basicsallery;
			cin.ignore(1);
			cout<<"Enter Employee Department :-";
			cin.getline(dept,10);
			cout<<"Enter Employee Name :-";
			cin.getline(name,10);
			cout<<"Enter Employee Designation :-";
			cin.getline(desig,10);
		}
		void print()
		{
			cout<<"Employee Code :-"<<code<<endl;
			cout<<"Employee Name :-"<<name<<endl;
			cout<<"Employee Department :-"<<dept<<endl;
			cout<<"Employee Designation :-"<<desig<<endl;
			cout<<"Empoyee Basic Sallery :-"<<basicsallery<<endl;
		}
};
void main()
{
	employee emp;
	emp.input();
	clrscr();
	emp.print();
	getch();
}