// Write three derived classes inheriting functionality of base class person
// (should have a member function that asks to enter name and age) and with added
//  unique features of student, and employee, and functionality to assign, change
//   and delete records of student and employee. And make one member function for
//   printing the address of the objects of classes (base and derived) using this
//   pointer. Create two objects of the base class and derived classes each and
//  print the addresses of individual objects. Using a calculator, calculate the
// address space occupied by each object and verify this with address spaces printed
// by the program.
#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    void set_data()
    {
        cout << "Enter the name of person :";
        getline(cin, name);
        cout << "Enter the age of person :";
        cin >> age;
    }
    void display()
    {
        cout << "\n\n\nPresonal details !!!!\n--------------------------------\nName : " << name << "\nAge= " << age;
    }
};
class employee : public person
{
protected:
    int salary, em_id;

public:
    void set_data()
    {

        cout << "Enter the salary :";
        cin >> salary;
        cout << "Enter the emloyee ID :";
        cin >> em_id;
    }
    void dispaly()
    {

        cout << "\n\n\nEmployee Details !!!!!\n--------------------------\n";
        cout << "Salary : " << salary << "\nEmployee ID No : " << em_id;
    }
};
class student : public person
{
protected:
    int opp, ecm, micro;

public:
    void set_data()
    {
        person::set_data();
        cout << "Enter the marks obtained in C++ : ";
        cin >> opp;
        cout << "Enter the marks obtained in ECM : ";
        cin >> ecm;
        cout << "Enter the marks obtained in Microprocessor : ";
        cin >> micro;
    }
    void display()
    {
        person::display();
        cout << "\n\n\nMarks obtained !!!!!!\n---------------------------------\n";
        cout << "Marks obtained in C++ : " << opp << "\nMarks obtained in ECM : " << ecm << "\nMarks obtained in Microprocessor : " << micro;
        }
};
int main()
{
    employee e1;
    student s1;
    s1.set_data();
    e1.set_data();
    s1.display();
    e1.dispaly();
    
    return 0;
}