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
inline float increment(float,float);
inline float total_salary(float,float);
int main()
{
    float CEO,IO,SA,PG,c,i,s,p;
    float C,I,S,P;
    cout<<"Enter the salary of Chief executive officer and increment in percentage (per year):";
    cin>>CEO>>c;
    cout<<"Enter the salary of Information officer and increment in percentage (per year):";
    cin>>IO>>i;
    cout<<"Enter the salary of System analyst and increment in percentage (per year):";
    cin>>SA>>s;
    cout<<"Enter the salary of Programmer and increment in percentage (per year):";
    cin>>PG>>p;  
    C=increment(CEO,c);
    I=increment(IO,i);
    S=increment(SA,s);
    P=increment(PG,p);
    cout<<" \nSalary of year 2009."<<endl<<"--------------------------";
    cout<<"  \nChief executive officer :"<<CEO;
    cout<<"  \nInformation officer :"<<IO;
    cout<<"  \nSystem Analyst :"<<SA;
    cout<<"  \nProgrammer :"<<PG;
    cout<<" \n\n\n\nIncrement of year 2009."<<endl<<"--------------------------";
    cout<<"  \nChief executive officer :"<<C<<" BY "<<c<<" Percent";
    cout<<"  \nInformation officer :"<<I<<" BY "<<i<<" Percent";
    cout<<"  \nSystem Analyst :"<<S<<" BY "<<s<<" Percent";
    cout<<"  \nProgrammer :"<<P<<" BY "<<p<<" Percent";
    cout<<" \n\n\n\nNet for year 2010."<<endl<<"--------------------------";
    cout<<"  \nChief executive officer :"<<total_salary(CEO,C);
    cout<<"  \nInformation officer :"<<total_salary(IO,I);
    cout<<"  \nSystem Analyst :"<<total_salary(SA,S);
    cout<<"  \nProgrammer :"<<total_salary(PG,P);
    return 0;
}
float increment(float X,float Y)
{
    return (X/100)*10 ;
}
float total_salary(float a,float b)
{
    return a+b ;
}

// OR----- Simple

#include<iostream>

using namespace std;
int incsal(int salary,int rate);
int main()
{
  cout<<"The incremented salary of cheif executive officier is :"<<incsal(35000,9)<<endl;

  cout<<"The incremented salary of information officier is :"<<incsal(25000,10)<<endl;

  cout<<"The incremented salary of system analyst is :"<<incsal(24000,12)<<endl;

  cout<<"The incremented salary of programmer is :"<<incsal(18000,12)<<endl;

  return 0;  
}
int incsal(int salary,int rate)
{
  return (salary+((rate*salary)/100));
}