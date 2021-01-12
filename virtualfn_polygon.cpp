#include<iostream>
using namespace std;
class polygon
{
  public:
  virtual void calculate_area()
     {
            cout<<"the no. of sides of the polygon are "<<endl;
     }
};
class rectangle : public polygon
{
     public:
     void calculate_area()
     {
     int width = 2;
     int height= 3;
     cout<<"the area of rectangle is = "<<(width*height)<<endl;
     }
};
class triangle : public polygon
{
       public:
       void calculate_area()
       {
       int breadth = 4;
       int height = 5;
       cout<<"the area of triangle is = "<<(0.5*breadth*height)<<endl;
       }
};
class circle : public polygon
{
        public:
        void calculate_area()
        {
        int radius = 7;
        cout<<"the area of circle is ="<<((3.14)*(radius*radius))<<endl;
        }
};
int main()
{
  polygon*p;
  triangle t;
  p=&t;
  p->calculate_area();
  rectangle r;
  p=&r;
  p->calculate_area();
  circle c;
  p=&c;
  p->calculate_area();
};



