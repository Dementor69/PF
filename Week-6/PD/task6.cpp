#include <iostream>
using namespace std;
main()
{
    string month;
    float stays, apartment, studio;
    cout<<"Enter the Month of Stay: ";
    cin>>month;
    cout<<"Enter the number of Stays: ";
    cin>>stays;
    if(month=="May"||month=="October")
    {
        if(stays<=7)
        {
            studio=50*stays;
            apartment=65*stays;
        }
        if(stays>7&&stays<=14)
        {
            studio=(50*stays)-((50*stays*10)/100);
            apartment=65*stays;
        }
        if(stays>14)
        {
            studio=(50*stays)-((50*stays*30)/100);
            apartment=(65*stays)-((65*stays*10)/100);
        }
    }
    if(month=="June"||month=="September")
    {
        if(stays<=14)
        {
            studio=75.20*stays;
            apartment=68.70*stays;
        }
        if(stays>14)
        {
            studio=(50*stays)-((50*stays*20)/100);
            apartment=(65*stays)-((65*stays*10)/100);
        }
    }
    if(month=="July"||month=="September")
    {
        studio=75.20*stays;
        if(stays<=14)
        {
            apartment=68.70*stays;
        }
        if(stays>14)
        {
            apartment=(65*stays)-((65*stays*10)/100);
        }
    }
    cout<<"Expenditure for Studio: "<<studio<<endl;
    cout<<"Expenditure for Apartment: "<<apartment;
}