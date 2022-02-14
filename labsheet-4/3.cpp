// Write a class that can store Department ID and Department Name with constructors to initialize its members.
// Write destructor member in the same class and display the message "Object n goes out of the scope".
// Your program should be made such that it should show the order of constructor and destructor invocation.
#include <iostream>
#include <string>
using namespace std;
class department
{
private:
    int ID;
    string name;

public:
    department(string n,int i)
    {
        ID = i;
        name = n;
    }
    void display()
    {
        cout << "\nDepartment id = " << ID << "\nDepartment name = " << name;
    }
    ~department()
    {
        cout << "\nObject n goes out of the scope.";
    }
};
int main()
{
    int b;
    string na;
    cout<<"Enter the Department name :";
    getline(cin,na);
    cout<<"Enter the Department ID :";
    cin>>b;
    department d1(na,b);
    d1.display();
    return 0;
}