#include<iostream>
using namespace std;
main()
{
float bagSize, bagCost, area, costPerPound, costPerArea;
cout<<" Enter Bag Size in Pounds: ";
cin>>bagSize;
cout<<"Enter Cost of the Bag: ";
cin>>bagCost;
cout<<"Enter Area Covered by Eacg Bag in Square Feet: ";
cin>>area;
costPerPound=bagCost/bagSize;
costPerArea=bagCost/area;
cout<<"Cost of the Fertilizer pe Pound: "<<costPerPound<<endl;
cout<<"Cost of Fertilizing the Area per Square Feet: "<< costPerArea;
}
