#include<iostream>
#include<windows.h>
using namespace std;
main()
{
    float projectHours, days, workers, workDays, totalHours, result;
    cout<<"Enter the Number of Hours required to complete the Task: ";
    cin>>projectHours;
    cout<<"Enter the Number of Days the Firm has: ";
    cin>>days;
    cout<<"Enter the Number of Workers in the Firm: ";
    cin>>workers;
    workDays=days-(days*(10.0/100));
    totalHours=workDays*10*workers;
    if(totalHours>=projectHours)
    {
        result=totalHours-projectHours;
        cout<<"Yes! "<<result<<" Hours are Left!";
    }
    if(totalHours<projectHours)
    {
        result=projectHours-totalHours;
        cout<<"Not Enough Time! "<<result<<" Hours are Needed!";
    }
}