// Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be
//  a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a
//  bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
using namespace std;
class car
{
private:
    int num_vehicle, hour, rate, total, net, discount;
public:
    car()
    {
        num_vehicle = 0;
        hour = 0;
        rate = 0;
    }
    car(int n, int h, int r)
    {
        num_vehicle = n;
        hour = h;
        rate = r;
    }
    car(car &t)
    {
        car charge;
        charge.total = t.num_vehicle * t.hour * t.rate;
        charge.discount = 0.1 * charge.total;
        charge.net = charge.total - charge.discount;
        if (t.num_vehicle >= 10)
            cout << "Total charge = Rs" << charge.net << " with 10 percent discount.";
        else
            cout << "Total charge = Rs" << charge.total;
    }
};
int main()
{
    int a, b, c;
    cout << "Enter the number of vehicle ranted :";
    cin >> a;
    cout << "Time :";
    cin >> b;
    cout << "Rate per hour :";
    cin >> c;
    car c1(a, b, c), c2(c1);
    return 0;
}