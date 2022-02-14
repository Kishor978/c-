// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale 
// and vice versa using the basic concept of class and object. Make separate classes for Celsius 
// and Fahrenheit which will have the private members that hold the temperature value and make 
// conversion functions in each class for conversion from one to another.
//  For example, you need to have a function toFahrenheit() in class Celsius that converts '
//  to Fahrenheit scale and returns the value.
#include<iostream>
using namespace std;
class Celsius
{
    private:
    float c;
    public :
    float input_temp(float x)
    {
        c=x;
        return 0;
    }
    int display(int y)
    {
        cout<<"\nOutput ="<<c<< " degree Fahrenhiet.";
        return 0;
    }
    Celsius to_fahrenheit(Celsius cel)
    {
        Celsius tem;
        tem.c= cel.c*1.8+32;
        return tem;
    }
};
class Fahrenheit
{
    private:
    float f;
    public :
    float input_temp(float x)
    {
        f=x;
        return 0;
    }
    int display(int y)
    {
        cout<<"\nOutput ="<<f<< " degree Calcius.";
        return 0;
    }
    Fahrenheit to_calcius(Fahrenheit fah)
    {
        Fahrenheit tem;
        tem.f= (fah.f-32)*0.555556;    
        return tem;
    }
};
int main()
{
    char a;
    cout<<"Enter 'F' for converting fahrenheit into celcius and 'C' for converting celcius in fahrenheit :";
    cin>>a;
    if(a=='C'|| a=='c')
    {
        float Tc;
        Celsius C1,C2,C3;
        cout<<"Enter the Temperature in Celcius :";
        cin>>Tc;
        C1.input_temp(Tc);     
        C3=C2.to_fahrenheit(C1);  
        C3.display(Tc); 
    }
    else if(a=='F'|| a=='f')
    {
        float Tc;
        
        Fahrenheit C5,C4,C6;
        cout<<"Enter the Temperature in Fahrenheit :";
        cin>>Tc;
        C4.input_temp(Tc);
        C6=C5.to_calcius(C4);
        C6.display(Tc);
    }
    else
    {
        cout<<"Error.......";
    } 
    return 0;  
}