#include <iostream>
using namespace std;
main()
{
    string fruit, day;
    float quantity, bill;
    cout<<"Enter the Type of Fruit: ";
    cin>>fruit;
    cout<<"Enter the Day: ";
    cin>>day;
    cout<<"Enter how many Fruits you want to Buy: ";
    cin>>quantity;
    if(day!="Monday"&&day!="Tuesday"&&day!="Wednesday"&&day!="Thursday"&&day!="Friday"&&day!="Saturday"&&day!="Sunday")
    {
        if(fruit!="banana"&&fruit!="apple"&&fruit!="orange"&&fruit!="grapefruit"&&fruit!="kiwi"&&fruit!="pineapple"&&fruit!="grapes")
        {
            cout<<"Error!";
            return 0;
        }
    }
    if(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday")
    {
        if(fruit=="banana")
        bill=2.50*quantity;
        if(fruit=="apple")
        bill=1.20*quantity;
        if(fruit=="orange")
        bill=0.85*quantity;
        if(fruit=="grapefruit")
        bill=1.45*quantity;
        if(fruit=="kiwi")
        bill=2.70*quantity;
        if(fruit=="pineapple")
        bill=5.50*quantity;
        if(fruit=="grapes")
        bill=3.85*quantity;
    }    
    if(day=="Saturday"||day=="Sunday")
    {
        if(fruit=="banana")
        bill=2.70*quantity;
        if(fruit=="apple")
        bill=1.25*quantity;
        if(fruit=="orange")
        bill=0.90*quantity;
        if(fruit=="grapefruit")
        bill=1.60*quantity;
        if(fruit=="kiwi")
        bill=3.00*quantity;
        if(fruit=="pineapple")
        bill=5.60*quantity;
        if(fruit=="grapes")
        bill=4.20*quantity;
    }
    cout<<"Total Payable Amount: "<<bill;
}