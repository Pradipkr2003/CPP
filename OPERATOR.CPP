#include<iosream.h>
#include<conio.h>
class Integer
{
	private:
		int data;
	public:
		Integer()
		{
			data=0;
		}
		Integer(int n)
		{
			data=n;
		}
		Integer(Integer &N)
		{
			data=N.data;
		}
		void input()
		{
			cin>>data;
		}
		void print()
		{
			cout<<data;
		}
		Integer operator + (Integer &N)
		{
			Integer x;
			x.data=data+N.data;
			return N;
		}
};
