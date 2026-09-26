#include<iostream.h>
#include<conio.h>
class Integer
{
	private:
		int data;
	public:
		Integer(){ data=0;}
		Integer(int n){ data=n;}
		Integer(Integer &N){ data=N.data;}
		void input(){ cin>>data;}
		void print(){ cout<<data<<endl;}
		Integer operator+(Integer &N)
		{
			Integer  x;
			x.data=data+N.data;
			return x;
		}
		Integer operator-(Integer &N)
		{
			Integer  x;
			x.data=data-N.data;
			return x;
		}
		Integer operator*(Integer &N)
		{
			Integer  x;
			x.data=data*N.data;
			return x;
		}
		Integer operator/(Integer &N)
		{
			Integer  x;
			x.data=data/N.data;
			return x;
		}
		Integer operator>(Integer &N)
		{
			Integer  x;
			x.data=data>N.data;
			return x;
		}
		Integer operator<(Integer &N)
		{
			Integer  x;
			x.data=data<N.data;
			return x;
		}
		Integer operator>=(Integer &N)
		{
			Integer  x;
			x.data=data>=N.data;
			return x;
		}
		Integer operator<=(Integer &N)
		{
			Integer  x;
			x.data=data<=N.data;
			return x;
		}
		Integer operator==(Integer &N)
		{
			Integer  x;
			x.data=data==N.data;
			return x;
		}
		Integer operator!=(Integer &N)
		{
			Integer  x;
			x.data=data!=N.data;
			return x;
		}

};
void main()
{
	Integer a=100,b=20,c=a+b,d=a-b,e=a*b,f=a/b,g=a>b,
	h=a<b,i=a>=b,j=a<=b,k=a==b,l=a!=b;
	clrscr();
	c.print();
	d.print();
	e.print();
	f.print();
	g.print();
	h.print();
	i.print();
	j.print();
	k.print();
	l.print();

	getch();
}
