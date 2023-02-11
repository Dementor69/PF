#include<iostream>
using namespace std;
main()
{
float vegPrice, fruitPrice, vegKg, fruitKg, vegCost, fruitCost, earning;
cout<<"Enter Vegetable Price per Kilogram: ";
cin>>vegPrice;
cout<<"Enter Fruit Price per Kilogram: ";
cin>>fruitPrice;
cout<<"Enter Kilograms of Vegetable Sold: ";
cin>>vegKg;
cout<<"Enter Kilograms of Fruits Sold: ";
cin>>fruitKg;
vegCost=vegPrice*vegKg*1.94;
fruitCost=fruitPrice*fruitKg*1.94;
earning=vegCost+fruitCost;
cout<<"The Total Earnings in Rupees is "<<earning<<" PKR";
}
