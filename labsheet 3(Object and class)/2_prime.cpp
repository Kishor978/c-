// Assume that you want to check whether the number is prime or not.
// Write a program that asks for numbers repeatedly. When it finishes checking a number
// the program asks if the user wants to do another calculation. The response can be 'y' or 'n'.
//  Don't forget to use the object-oriented concept.
#include <iostream>
using namespace std;
class prime
{
private:
    int p, count;
public:
    int input(int a)
    {
        count = 0;
        p = a;
        return 0;
    }
    prime check(prime y)
    {
        prime num;
        for (num.p = 1; num.p <= y.p; num.p++)
        {
            if (y.p % num.p == 0)
                count++;
        }
        if (count == 2)
        {
            cout << "Entered is a Prime number" << endl;
        }
        else
        {
            cout << "Entered is not a Prime number" << endl;
        }
    }
};
int main()
{
    char x;
    int n;
    prime p1, p3, p2;
        do
        {
            cout << "Enter the number :";
            cin >> n;
            p1.input(n);
            p3 = p2.check(p1);
            cout << "\nDo you want to check more numbers ? \n Enter 'Y' for yes and 'N' for no:";
            cin >> x;
        }while (x=='Y'||x=='y');
    return 0;
}