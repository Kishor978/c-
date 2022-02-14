// Write a program that has a class to represent time. The class should have constructors to initialize
// data members hour, minute, and second to 0 and to initialize them to values passed as arguments.
// The class should have a member function to add time objects and return the result as a time object.
// There should be functions to display time in 12-hour and 24-hour format.
#include <iostream>
using namespace std;
class time
{
private:
    int h, m, s;
public:
    time()
    {
        h = 0;
        m = 0;
        s = 0;
    }
    time(int hr, int min, int sec)
    {
        h = hr;
        m = min;
        s = sec;
    }
    void display_12()
    {
        if (h > 12)
        {
            h = h - 12;
            cout << "Time in 12 hours format...\n " << h << " : " << m << " :" << s << " pm";
        }
        else
        {
            cout << "\nTime in 12 hours format...\n " << h << " : " << m << " :" << s << " am";
        }
    }
    void display_24()
    {
        cout << "\nTime in 24 hours format...\n " << h << " : " << m << " :" << s ;
    }
};
int main()
{
    int a, b, c;
    cout << "Enter time!!";
    cout << "\nEnter hours:";
    cin >> a;
    cout << "\nEnter minute:";
    cin >> b;
    cout << "\nEnter seconds:";
    cin >> c;
    time T1(a, b, c),T2(a, b, c);
    T1.display_12();
    T2.display_24();
    return 0;
}