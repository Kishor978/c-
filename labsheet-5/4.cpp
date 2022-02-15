// Write a class Date that overloads prefix and postfix operators to increase the 
// Date object by one day, while causing appropriate increments to the month and year
//  (use the appropriate condition for leap year). The prefix and postfix operators
//  in the Date class should behave exactly like the built-in increment operators.
#include<iostream>
using namespace std;
class date
{
private:
int d,m,y;
public:
void set_data(int d1,int m1,int y1)
{
    d=d1;m=m1;y=y1;
}
date operator++()
{
    date D1;
    D1.d=
}

};