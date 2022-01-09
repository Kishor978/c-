// Write a function that passes two temperatures by reference and sets the larger
//  of the two numbers to a value entered by user by using return by reference.
#include<iostream>
using namespace std;
float temp(float &,float &);
int main()
{
    float t1,t2,t;
    cout<<"Enter two tamperature in °c :\n";
    cin>>t1>>t2;
    t=temp(t1,t2);
    cout<<"The largest temperature is " <<t<<"°c of "<<t1<<"°c and "<<t2<<"°c.";
    return 0;
}
float temp(float &x,float &y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
    return 0;
}