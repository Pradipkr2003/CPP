#include<iostream.h>
#include<conio.h>
const int MAX_ITEM=25;
class bag
{
  int constant[MAX_ITEM],Itemcount;
  public:
  bag()
  {
    Itemcount = 0;
  }
  void put(int item)
  {
    constant[Itemcount++] =item;
  }
    void show();
  };
  void bag::show()
  {
    for(int i=0;i<Itemcount;i++)
    cout<<constant[i];" ";
    cout<<endl;
  }
   void main()
  {
   clrscr();
   cout<<"Enter item number in the bag<0 to no item>";
   <in>>item;
   if(item==0)
   break;
   bag.put(item);
   cout<<"item in bag:";
   bag.show();
   getch();