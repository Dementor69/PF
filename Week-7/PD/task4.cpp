#include <iostream>
using namespace std;
main()
{
    int lower, higher;
    cout<<"Enter the Lower Bound: ";
    cin>>lower;
    cout<<"Eter the Higher Bound: ";
    cin>>higher;
    for(lower; lower<=higher; lower++)
    {
        if(lower%4==0)
        {
            cout<<lower*10<<", ";
            continue;
        }
        cout<<lower<<", ";
    }
}