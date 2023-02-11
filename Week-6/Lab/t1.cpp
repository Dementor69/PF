#include<iostream>
using namespace std;
float discount (string month, string day, float amount);
main()
{
    float amount, bill;
    string month, day;
    cout<<"Enter the Amount of the Purchased items: ";
    cin>>amount;
    cout<<"Enter the Month: ";
    cin>>month;
    cout<<"Enter the Day: ";
    cin>>day;
    bill=discount (month, day, amount);
    cout<<"The Total Payable Amount is "<<bill;
}

float discount (string month, string day, float amount)
{
    float bill;
    if(day=="Sunday"&&(month=="October"||month=="March"||month=="August"))
    {
       bill=amount-(amount*10/100);
    }
    else if(day=="Monday"&&(month=="November"||month=="December"))
    {
        bill=amount-(amount*5/100);
    }
    else
    {
        bill=amount;
    }
    return bill;
}