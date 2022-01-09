// Write a program using the function overloading that converts feet to inches.
// Use function with no argument, one argument and two arguments. Decide yourself 
// the types of arguments. Use pass by reference in any one of the function above.
#include<iostream>
using namespace std;
float feet();
float feet(float &);
float feet(float,float);
int main()
{
    
    float a,b;
    a=feet();
    b=feet(a);
    cout<<a<<" feet = "<<b<<" inches";
    return 0;
}
float feet()
{
    int f;
    cout<<"Enter distance in feet :\n";
    cin>>f;
    return f;
}
float feet(float &x)
{
    float y=12,c;
    cout<<"\nWe know 1 feet = 12 inch.\n";
    c=feet(x,y);
    return c;
}
float feet(float j,float k)
{
    return j*k;
}