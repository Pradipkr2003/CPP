#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Student
{
	int roll;
	char name[20],add[20];
	public:
		friend void input();
		friend void print();

};
	       Student:: void input()
		{
			cout<<"Enter Roll :-";
			cin>>roll;
			cin.ignore(1);
			cout<<"Enter Name :-";
			cin.getline(name,20);
			cout<<"Enter Address :-";
			cin.getline(add,20);
		}
	       Student:: void print()
		{
			cout<<"Roll :-"<<id<<endl;
			cout<<"Name :-"<<name<<endl;
			cout<<"Address :-"<<add<<endl;

class Node
{
	Student data;
	Node *next;
};
createnode()
{
	Node *n;
	n=(Node*)malloc(sizeof (Node));
	input(&(n->data));
	n->next=NULL;
	return n;
}
void addfirst(Node **H,Nlode*N)
{

       Node *p=*H;
       if(*H==NULL)
       {
		*H=N;
		return ;
       }
       while(p->next!=NULL)
       {
		p=p->next;
       }
       p->next=N;
}
void displaylist(Node *H)
{
	Node *p=H;
	if(H==NULL;
	{
		cout<<"List is Empty";
		getch();
		return;
	}
	while(p!=NULL)
	{
		printStudent(p->data);
		cout<<"\n=========\n");
		p=p->next;
	}
void main()
{
	Node *Head=NULL;
	Node *N;
	int i;
	for (i=0;i<4;i++)
	{
		N=createnode();
		addlast(&Head,N);
	}
	displaylist(Head);
	getch();
}