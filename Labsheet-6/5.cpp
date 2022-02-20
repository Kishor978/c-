// Write a base class that asks the user to enter a complex number and make a derived
// class that adds the complex number of its own with the base. Finally, make a third
// class that is a friend of derived and calculate the difference of the base complex
//  number and its own complex number.
#include <iostream>
using namespace std;
class base
{
private:
    int r, i;

public:
    void set_data()
    {
        cout << "\nEnter the real and imaginary part of complex number : ";
        cin >> r >> i;
    }
    int get_re(){return r;}
    int get_ie(){return i;}

};
class derived_add : public base
{
protected:
    int r1, i1;

public:
        void set_data()
    {
        base::set_data();
        cout << "\nEnter the real and imaginary part of complex number : ";
        cin >> r1 >> i1;
    }
    derived_add  add()
    {
        derived_add d;
        d.r1=r1+get_re();
        d.i1=i1+get_ie();
        return d;
    }
    void display()
    {
        cout<<"\nSum = "<<r1<<"+ j"<<i1;
    }
};
class derived_sub : public base
{
protected:
    int r2, i2;

public:
        void set_data()
    {
        base::set_data();
        cout << "\nEnter the real and imaginary part of complex number : ";
        cin >> r2 >> i2;
    }
    derived_sub  sub()
    {
        derived_sub d;
        d.r2=r2-get_re();
        d.i2=i2-get_ie();
        return d;
    }
    void display()
    {
        cout<<"\nDifference ="<<r2<<"+j"<<i2;
    }
};
int main()
{
    derived_add D1,D2;
    derived_sub s1,s2;
    D1.set_data();
    D2=D1.add();
    D2.display();
    s1.set_data();
    s2=s1.sub();
    s2.display();
    return 0;
}