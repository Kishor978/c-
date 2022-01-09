// Write a program to set a structure to hold a date (mm,dd and yy), 
// assign values to the members of the structure and print out the values 
// \in the format 11/28/2004 by function. Pass the structure to the function.

#include<iostream>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
};
int output(date);
int main()
{
    date d;
    cout<<"Enter todays date(mm/dd/yy) :\n";
    cin>>d.month>>d.day>>d.year;
    output(d);
    return 0;
}
int output(date d1)
{
    cout<<d1.month<<d1.day<<'/'<<'/'<<d1.year;
    return 0;
}
