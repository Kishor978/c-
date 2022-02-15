// Write a program to compare two objects of a class that contains an integer value as
//  its data member. Make overloading functions to overload equality(==), less than(<),
//  greater than(>), not equal (!=), greater than or equal to (>=), and less than or
//  equal to(<=) operators using member operator functions.
#include <iostream>
using namespace std;
class integer
{
private:
    int x;

public:
    void set_data(int a)
    {
        x = a;
    }
    void dispaly()
    {
    }
    float operator==(integer i)
    {
        return (x == i.x) ? true : false;
    }
    float operator<(integer i)
    {
        return (x < i.x) ? true : false;
    }
    float operator>(integer i)
    {
        return (x > i.x) ? true : false;
    }
    float operator!=(integer i)
    {
        return (x != i.x) ? true : false;
    }
    float operator>=(integer i)
    {
        return (x >= i.x) ? true : false;
    }
    float operator<=(integer i)
    {
        return (x <= i.x) ? true : false;
    }
};
int main()
{
    int r, s;
    integer i1, i2, i3;
    cout << "Enters the two integers :";
    cin >> r >> s;
    i1.set_data(r);
    i2.set_data(s);
    if (i1 == i2)
        cout << "Both number are equal.";
    else if (i1 > i2)
        cout << r << " greater than " << s;
    else if (i1 < i2)
        cout << r << " smaller than " << s;
    else if (i1 != i2)
        cout << r << " not equal to " << s;
    else if (i1 >= i2)
        cout << r << " greater equal to " << s;
    else if (i1 <= i2)
        cout << r << " smaller equal to " << s;
    return 0;
}
