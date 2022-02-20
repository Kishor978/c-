// Write a program that can convert the Distance (meter, centimeter) to meters measurement
//  in float and vice versa. Make a class distance with two data members, meter and
//  centimeter. You can add function members as per your requirement.
#include <iostream>
using namespace std;
class Distance
{
private:
    float m, cm;

public:
    Distance()
    {
    }
    Distance(float k)
    {
        m=k;
        cm = k * 100;
    }
    void display()
    {
        cout <<"Given "<<m <<" meter= " << cm<<" centimeter.";
    }
};
int main()
{
    Distance d1;
    float x;
    cout << "Enter the data in meter to be changed:";
    cin >> x;
    d1 = x;
    d1.display();
    return 0;
}
