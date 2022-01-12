// Create a class called carpark that has int data member for car id, int data member for 
// charge/hour, and float data member for the parked time. Make functions to set data members 
// and show the charges and parked hours of the corresponding car id. Make functions for setting
//  and showing the data members. Member function should be called from other functions.
#include<iostream>
using namespace std;
class carpark
{
    private :
    int car_id,cph;
    float pt;
    public:
    int set_data(int a,int b,float c)
    {
        car_id= a;
        cph=b ;
        pt= c;
        return 0;
    }
    int display()
    {
        cout<<"Car ID= "<<car_id<<"\nCharge per hour= "<<cph<<"\nParked time= "<<pt;
        return 0;
    }
};
int main()
{
    carpark c1;
    int x,y;
    float p;
    cout<<"Enter the car id, charge/hour and parked time:";
    cin>>x>>y>>p;
    c1.set_data(x,y,p);
    c1.display();
    return 0;
}