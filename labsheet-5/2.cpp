// Write a class to store x, y, and z coordinates of a point in three-dimensional space.
//  Overload addition and subtraction operators for addition and subtraction of two coordinate
// objects. Implement the operator functions as non-member functions (friend operator functions).
#include <iostream>
using namespace std;
class coordinates
{
private:
    float x, y, z;

public:
    void set_data(float a, float b, float c)
    {
        x = a, y = b, z = c;
    }
    void sum_display()
    {
        cout << "\nSum of coordinates:\n X= " << x << "\n Y= " << y << "\n Z= " << z;
    }
    void sub_display()
    {
        cout << "\nSubstraction of coordinates:\n X= " << x << "\n Y= " << y << "\n Z= " << z;
    }

    friend coordinates operator+(coordinates, coordinates);
    friend coordinates operator-(coordinates, coordinates);
};
coordinates operator+(coordinates o1, coordinates o2)
{
    coordinates temp;
    temp.x = o1.x + o2.x;
    temp.y = o1.y + o2.y;
    temp.z = o1.z + o2.z;
    return temp;
}
coordinates operator-(coordinates o1, coordinates o2)
{
    coordinates temp;
    temp.y = o1.y - o2.y;
    temp.x = o1.x - o2.x;
    temp.z = o1.z - o2.z;
    return temp;
}

int main()
{
    coordinates c1, c2, c3, c4;
    int p, q, r, s, t, u;
    cout << "Enter the  first 3D coordinates(X,Y,Z) :";
    cin >> p >> q >> r;
    cout << "Enter the  second 3D coordinates(X,Y,Z) :";
    cin >> s >> t >> u;
    c1.set_data(p, q, r);
    c2.set_data(s, t, u);
    c3 = c1 + c2;
    c4 = c1 - c2;
    c3.sum_display();
    c4.sub_display();
    return 0;
}
