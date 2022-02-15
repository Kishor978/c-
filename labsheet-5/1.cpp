// Write a class for instantiating the objects that represent the two-dimensional Cartesian
//  coordinate system.
// A. Make a particular member function of one class as a friend function of another class
//  for addition.
// B. Make the other three functions to work as a bridge between the classes for
//  multiplication, division, and subtraction.
// C. Also write a small program to demonstrate that all the member functions of one class are
//  the friend functions of another class if the former class is made friend to the latter.
// Make least possible classes to demonstrate all the above in a single program without conflict.
#include <iostream>
using namespace std;
class Y_coordinate;
class X_coordinate
{
private:
    float a;

public:
    void set_data(float s)
    {
        a = s;
    }
    void display()
    {
    }
    friend void add(X_coordinate, Y_coordinate);
    friend void sub(X_coordinate, Y_coordinate);
    friend void multiply(X_coordinate, Y_coordinate);
    friend void divide(X_coordinate, Y_coordinate);
};
class Y_coordinate
{
private:
    float b;

public:
    void set_data(float t)
    {
        b = t;
    }
    void display()
    {
    }
    friend void add(X_coordinate, Y_coordinate);
    friend void sub(X_coordinate, Y_coordinate);
    friend void multiply(X_coordinate, Y_coordinate);
    friend void divide(X_coordinate, Y_coordinate);
};
void add(X_coordinate x,Y_coordinate y)
{
    cout<<"\nSum of X and Y coordinate = "<<x.a+y.b;
}
void sub(X_coordinate x,Y_coordinate y)
{
    cout<<"\nSubstraction of X and Y coordinate = "<<x.a-y.b;
}
void multiply(X_coordinate x,Y_coordinate y)
{
    cout<<"\nMultiplication of X and Y coordinate = "<<x.a*y.b;
}
void divide(X_coordinate x,Y_coordinate y)
{
    cout<<"\nDivision of X and Y coordinate = "<<x.a/y.b;
}
int main()
{
    float p,q;
    X_coordinate x1;
    Y_coordinate y1;
    cout<<"Enter X coordinate :";
    cin>>p;
    cout<<"Enter Y coordinate :";
    cin>>q;
    x1.set_data(p);
    y1.set_data(q);
    add(x1,y1);
    sub(x1,y1);
    multiply(x1,y1);
    divide(x1,y1);
    return 0;
}