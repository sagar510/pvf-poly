#include<iostream.h>
#include<conio.h>
usingnamespacestd();

class shape
{
 public:
  virtual void area()=0;
  virtual void perimeter()=0;
};

class rectangle : public shape
{
  int a,b;
 public:
  rectangle(int a,int b){a=a;b=b;};
  void area()
  {
   cout<<"\nArea of rectangle "<<a*b;
  }
  void perimeter()
  {
   cout<<"\nPerimeter of rectangle "<<2*(a+b);
  }
};

class circle : public shape
{
 int r;
 public:
  circle(int r){r=r;}
  void area()
  {
   cout<<"\nArea of circle "<<(double)(3.14*r*r);
  }
  void perimeter()
  {
   cout<<"\nPerimeter of circle "<<(double)(2*3.14*r);
  }
};



int main()
{
 clrscr();

 shape *ptr;
 ptr=new rectangle(2,4);
 ptr->area();
 ptr->perimeter();

 ptr=new circle(5);
 ptr->area();
 ptr->perimeter();

 delete ptr;

 getch();
 return 0;
}