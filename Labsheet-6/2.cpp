// Write two classes to store distances in meter-centimeter and feet-inch systems
// respectively. Write conversions functions so that the program can convert objects
//  of both types.
#include <iostream>
using namespace std;
class inch_feet
{
private:
    float in, fe;

public:
    void set_data(float i, float f)
    {
        fe = f;
        in = i;
    }
    float get_in()
    {
        return in;
    }
    float get_fe()
    {
        return fe;
    }
};
class meter_centi
{
private:
    float m, cm;

public:
    void set_data(float me, float c)
    {
        cm = c;
        m = me;
    }
    meter_centi() {}
    meter_centi(inch_feet I)
    {
        cm = I.get_in() / 2.54;
        m = I.get_fe() / 3.2808;
    }
    void dispaly(inch_feet i)
    {
        cout<<i.get_fe()<<" feet = "<<m<<" meter."<<"\n"<<i.get_in()<<" inch = "<<cm<<" centimeter.";
    }
};

int main()
{
    inch_feet i1, i2;
    meter_centi m1, m2;
    float a, b, c, d;
    cout << "Enter the distance in inch and feet :";
    cin >> c >> d;
    i1.set_data(c, d);
    m1 = i1;
    m1.dispaly(i1);
    return 0;
}