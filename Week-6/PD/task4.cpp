#include <iostream>
using namespace std;
main()
{
    float minutes, bill, overtime;
    char service, usageTime;
    cout<<"Enter the Type of Service being used(Enter 'R' for Reular and 'P' for Premium): ";
    cin>>service;
    if(service=='P'||service=='p')
    {
        cout<<"Enter the Time of Usage(Enter 'D' for Day and 'N' for Night):";
        cin>>usageTime;
        if(usageTime!='D'&&usageTime!='d'&&usageTime!='N'&&usageTime!='n')
        {
            cout<<"Error!";
            return 0;
        }
    }
    cout<<"Enter the Number of Minutes the Service is used: ";
    cin>>minutes;
    if(service=='R'||service=='r')
    {
        if(minutes<=50)
        bill=10;
        else
        {
            overtime=minutes-50;
            bill=10+(overtime*0.20);
        }
        cout<<"The Type of Service You used is Regular!"<<endl;
        cout<<"The number of Minutes you have used the Service are: "<<minutes<<endl;
        cout<<"The Charges to be Paid: "<<bill<<"$";
    }
    if((usageTime=='D'||usageTime=='d')&&(service=='P'||service=='p'))
    {
        if(minutes<=75)
        bill=25;
        else
        {
            overtime=minutes-75;
            bill=25+(overtime*0.10);
        }
        cout<<"The Type of Service You used is Premium at Day-time!"<<endl;
        cout<<"The number of Minutes you have used the Service are: "<<minutes<<endl;
        cout<<"The Charges to be Paid: "<<bill<<"$";
    }
    if((usageTime=='N'||usageTime=='n')&&(service=='P'||service=='p'))
    {
        if(minutes<=100)
        bill=25;
        else
        {
            overtime=minutes-100;
            bill=25+(overtime*0.05);
        }
        cout<<"The Type of Service You used is Premium at Night-time!"<<endl;
        cout<<"The number of Minutes you have used the Service are: "<<minutes<<endl;
        cout<<"The Charges to be Paid: "<<bill<<"$";
    }
}