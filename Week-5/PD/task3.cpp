#include<iostream>
#include<windows.h>
using namespace std;
main()
{
    float price, tax, finalPrice;
    char code;
    cout<<"Enter the Price of the Vehicle: ";
    cin>>price;
    cout<<"Enter the Vehicle Type Code: ";
    cin>>code;
    if(code=='M')
    {
        tax=(price)*6/100;
        finalPrice=price+tax; 
        cout<<"The Price of your "<<code<<" Type Vehicle is "<<finalPrice;
    }
     if(code=='E')
    {
        tax=(price*8)/100;
        finalPrice=price+tax; 
        cout<<"The Price of your "<<code<<" Type Vehicle is "<<finalPrice;
    }
     if(code=='S')
    {
        tax=(price*10)/100;
        finalPrice=price+tax; 
        cout<<"The Price of your "<<code<<" Type Vehicle is "<<finalPrice;
    }
     if(code=='V')
    {
        tax=(price*12)/100;
        finalPrice=price+tax; 
        cout<<"The Price of your "<<code<<" Type Vehicle is "<<finalPrice;
    }
     if(code=='T')
    {
        tax=price*(15/100);
        finalPrice=price+tax; 
        cout<<"The Price of your "<<code<<" Type Vehicle is "<<finalPrice;
    }
}