// Assume that an object represents an employee report that contains information like
// employee id, total bonus, total overtime in a particular year. Use an array of objects
// to represent n employees' reports. Write a program that displays the report.
// Use setpara() member function to set report attributes by passing the arguments and
// member function displayreport() to show the report according to the parameter passed.
// Display the report in the following format.
// An employee with ... ... ... has received Rs ... ... ...as a bonus and
// had worked ... ... ... hours as overtime in the year ... ... ...
#include <iostream>
using namespace std;
class employee
{
private:
    int em_id, year;
    float bonus, ot;
public:
    int setpara(int e, float b, float o, int y)
    {
        em_id = e;
        bonus = b;
        ot = o;
        year = y;
        return 0;
    }
    int display_report()
    {
        cout << "\nAn employee with " << em_id << " has received Rs " << bonus << " as a bonus and had worked " << ot << " hours as overtime in the year " << year << ".";
        return 0;
    }
};
int main()
{
    employee E1;
    int id, ye, n;
    float bo, OT;
    cout << "\nEnter the number of employee :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter the year after 2000 BS:";
        cin >> ye;
        if (ye > 2000)
        {
            cout << "\nEnter the year after 2000 BS:";
        }
        cout << "\nEnter the employee id:";
        cin >> id;
        cout << "\nEnter over time of employee in hours:";
        cin >> OT;
        cout << "\nEnter bonus  of employee in Rs: ";
        cin >> OT;
        E1.setpara(id, bo, OT, ye);
        E1.display_report();
    }
    return 0;
}