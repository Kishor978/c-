// Assume that employee will have to pay 10 percent income tax to the government.
//  Ask user to enter the employee salary. 
//  Use inline function to display the net payment to the employee by the company.

#include<iostream>
using namespace std;
inline float payment_display(float);
int main()
{
    float s,n,c;
    cout<<"Enter the salary of employee : \n";
    cin>>s;
    cout<<"AS 10 percent tax was deducted !!!\n";
    c=(s/100)*10;
    n=s-c;
    payment_display(n);
    return 0;
}
float payment_display(float a)
{
    cout<<"Net Salary = "<<a;
    return 0;
}