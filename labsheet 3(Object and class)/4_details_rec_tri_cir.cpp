// Write a program with classes to represent a circle, rectangle, and triangle.
// Each class should have data members to represent the actual objects and member functions to
// read and display objects, find perimeter and area of the objects, and other useful functions.
// Use the classes to create objects in your program.
#include <iostream>
#include<cmath>
using namespace std;
class circle
{
private:
    float r, pi = 3.14;
    float area, circum;

public:
    float read(float a)
    {
        r = a;
        return 0;
    }
    circle calculation(circle c)
    {
        circle temp;
        temp.area = c.pi * r * r;
        temp.circum = 2 * pi * r;
        return temp;
    }
    float display()
    {

        cout << "Details of circle:\nArea = " << area << " meter square\nCircumfrance = " << circum << " meter";
        return 0;
    }
};
class rectangle
{
private:
    float l, b, area, peri;

public:
    float read(float a, float c)
    {
        l = a;
        b = c;
        return 0;
    }
    rectangle calculation(rectangle r)
    {
        rectangle temp;
        temp.area = l * b;
        temp.peri = 2 * (l + b);
         return temp;
    }
    float dispaly()
    {
        cout << "\nDetails of rectangle:\nArea = " << area << " meter square\nperimeter = " << peri << " meter";
        return 0;
    }
};
class triangle
{
    private:
    float a,b,c,area,peri,s;
    public:
    float read(float i,float j,float k)
    {
        a=i;
        b=j;
        c=k;
        return 0;
    }
    triangle calculation(triangle t)
    {
        triangle temp;
        temp.peri=a+b+c;
        temp.s= temp.peri/2;
        temp.area=sqrt(temp.s*(temp.s-a)*(temp.s-b)*(temp.s=c));
        return temp;
    }
    float display()
    {
        cout << "\nDetails of triangle:\nArea = " << area << " meter square\nperimeter = " << peri << " meter";
        return 0;
    }
};
int main()
{
    
    circle c1, c2;
    rectangle r1, r2;
    triangle t1,t2;
    float ra,la,br,a,b,c;
    cout << "\nEnter the radius of circle in meter:";
    cin >> ra;
    c1.read(ra);
    c2 = c1.calculation(c1);
    c2.display();
    cout << "\nEnter the length and breadth of rectangle in meter:" ;
    cin >> la>> br;
    r1.read(la, br);
    r2 = r1.calculation(r1);
    r2.dispaly();
    cout<<"\nEnter the three sides of triangle:";
    cin>>a>>b>>c;
    t1.read(a,b,c);
    t2=t1.calculation(t1);
    t2.display();

    return 0;
}