#include <iostream>
using namespace std;
main()
{
    int period, patients;
    int treated, untreated, totalTreated=0, totalUntreated=0;
    cout<<"Enter the Period for which you want to make calculations: ";
    cin>>period;  
    for(int x=1; x<=period; x++)
    {
        cout<<"Enter the Number of Patients: ";
        cin>>patients;
        if(x>=3&&untreated>0)
        {
            untreated=patients-8;
            treated=patients-untreated;
            totalTreated=totalTreated+treated;
            totalUntreated=totalUntreated+untreated;
            continue;
        }
        if(patients>=7)
        {
            untreated=patients-7;
            treated=patients-untreated;
            totalTreated=totalTreated+treated;
            totalUntreated=totalUntreated+untreated;
            continue;
        }
        else
        {
            treated=patients;
            untreated=0;
            totalTreated=totalTreated+treated;
            totalUntreated=totalUntreated+untreated;
            continue;
        }
    }
    cout<<"Total Treated Patients: "<<totalTreated<<endl;
    cout<<"Total Untreated Patients: "<<totalUntreated<<endl;
}