#include<iostream>
using namespace std;
main()
{
    string fruitName;
    int quantity, bill;
    string fruit[4]={"peach", "apple", "guava", "watermelon"};
    int price[4]={60, 70, 40, 30};
    cout<<"Enter the Name of the Fruit you want to Buy: ";
    cin>>fruitName;
    cout<<"Enter the Quantity: ";
    cin>>quantity;
    for(int x=0; x<4; x++)
    {
        if(fruit[x]==fruitName)
        {
            bill=price[x]*quantity;
            break;
        }
    }
    cout<<"The bill for "<<quantity<<" "<<fruitName<<" is "<<bill;
}