#include<iostream.h>
#include<conio.h>
class Book
{
	private:
		int id;
		float price;
		char title[20],author[20],publ[20];
	public:
	void input()
	{
		cout<<"Enter Book Id :-";
		cin>>id;
		cout<<"Enter Book Price :-";
		cin>>price;
		cin.ignore(1);
		cout<<"Enter Book Title :-";
		cin.getline(title,20);
		cout<<"Enter Book Author :-";
		cin.getline(author,20);
		cout<<"Enter Book Publisher :-";
		cin.getline(publ,20);
	}
	void print()
	{
		cout<<"Book Id :-"<<id<<endl;
		cout<<"Book Title :-"<<title<<endl;
		cout<<"Book Author :-"<<author<<endl;
		cout<<"Book Price :-"<<price<<endl;
		cout<<"Book Publisher :-"<<publ<<endl;
	}
};
void main()
{
	Book b1,b2;
	b1.input();
	b2.input();
	clrscr();
	b1.print();
	b2.print();
	getch();
}