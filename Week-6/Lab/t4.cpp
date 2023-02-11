#include<iostream>
using namespace std;
float totalIncome(string screen, int row, int column);
main()
{
    int row, column;
    string screen;
    float income;
    cout<<"Enter the number of Rows in the Cinema: ";
    cin>>row;
    cout<<"Enter the number of Columns in the Cinema: ";
    cin>>column;
    cout<<"Enter the Type of Screening: ";
    cin>>screen;
    income=totalIncome(screen, row, column);
    cout<<"The Total Revenue Generated is "<<income;
}

float totalIncome(string screen, int row, int column)
{
    float income;
    if(screen=="Premiere")
    {
        income=row*column*12.00;
    }
    if(screen=="Normal")
    {
        income=row*column*7.50;
    }
    if(screen=="Discount")
    {
        income=row*column*5.00;
    }
    return income;
}