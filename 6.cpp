// Write a program that displays the current monthly salary of chief executive officer, 
// information officer, and system analyst, programmer that has been increased 
// by 9, 10, 12, and 12 percentages respectively in year 2010.
//  Let us assume that the salaries in year 2009 are
//  Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment. 
// Use proper default argument.
#include<iostream>
using namespace std;
struct salary
{
    
}sa;

float increment(float,float);
float total_salary(float,float);
int main()
{
    int CEO=35000,IO=25000,SA=24000,PG=18000;
    int c=9,i=10,s=12,p=12;
    float C,I,S,P,ceo,io,sa,pg;
    C=increment(CEO,c);
    I=increment(IO,i);
    S=increment(SA,s);
    P=increment(PG,p);
    ceo=total_salary(CEO,C);
    io=total_salary(IO,I);
    
    return 0;
}
