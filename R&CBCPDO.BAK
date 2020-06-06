#include<iostream.h>
#include<conio.h>

class rectangle
{
 public:
 int area(int l,int b)
 {
   return l*b;
 }
};

class cuboid : public rectangle
{
 public:
 int vol(int l,int b,int h)
 {
   return l*b*h;
 }
};

void main()
{
 clrscr();
 rectangle *p;
 p=new cuboid();
 cout<<"Area of rectangle : "<<p->area(3,5);
// cout<<"\nVol of cube : "<<p->vol(3,5,5);
 getch();
}