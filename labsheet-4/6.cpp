// Create a class with a data member to hold a "serial number" for each object created from the class.
//  That is, the first object created will be numbered 1, the second 2, and so on by using the basic
//  concept of static data members. Use static member function if it is useful in the program.
//  Otherwise, make a separate program that demonstrates the use of static member function.
#include <iostream>
using namespace std;
class serial
{
private:
    static int a;
    string obj;

public:
    void set_data(string o)
    {
        obj = o;
    }
    static void set_variable(int j)
    {
        a = ++j;
    }
    void display()
    {
        cout << a << ". " << obj;
    }
};
int serial ::a = 1;
int main()
{

    string x;
    int y;
    cout << "Enter the no ohject you want enter:";
    cin >> y;
    for (int i = 1; i <= y; i++)
    {
        serial s1;
        cout << "\nEnter the name of Object :";
        cin>> x;
        s1.set_data(x);
        s1.display();
        s1.set_variable(i);
    }
    return 0;
}