#include <iostream>
#include <cmath>

using namespace std;
class Shape
{
public:
    double x;
    double y;
};
class Rectangle : public Shape
{
public:
    double width;
    double height;

    double area();
    double circumference();
};
class Circle : public Shape
{
public:
    double radius;

    double area();
    double circumference();
};

class Triangle : public Shape
{
public:
    double height;
    double base;
    double side3;

    double area();
    double circumference();
};
double Rectangle::area()
{
    return width * height;
}

double Circle::area()
{
    return 3.1415926 * radius * radius;
}

double Triangle::area()
{
    return 0.5 * height * base;
}


double Rectangle::circumference()
{
    return width* 2 + height * 2;
}

double Circle::circumference()
{
    return 3.1415926 * radius * 2;
}

double Triangle::circumference()
{
    return height + base + side3;
}
int main(){ 
	
	Rectangle r;
	cout<<"Please enter rectangle's width:";
	cin>>r.width;
	cout<<"Please enter rectangle's height:";
    cin>>r.height;
    cout<<"Circumference of rectangle is "<<r.circumference()<<endl;
	cout<<"Area of rectangle is "<<r.area()<<endl<<endl;
	
	Triangle t;
	cout<<"Please enter triangle's height:"<<endl;
	cin>>t.height;
	cout<<"Please enter triangle's base:"<<endl;
    cin>>t.base;
    cout<<"Please enter triangle's 3rd side:"<<endl;
    cin>>t.side3;
    cout<<"Circumference of triangle is "<<t.circumference()<<endl;
    cout<<"Triangle's area is "<<t.area()<<endl<<endl;
    
    Circle c;
    cout<<"Please enter circle's radius:"<<endl;
	cin>>c.radius;
    cout<<"Circle's area is "<<c.area()<<endl;
    cout<<"Circle's circumference is "<<c.circumference();
    }
