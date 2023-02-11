#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    number=number/2;
    int extra=number;
    while(number>0)
    {
        for(int i=number; i>0; i--)
        {
            cout<<" ";
        }
        for(int j=number; j<=extra; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        number--;
    }

    for(int i=0; i<=extra; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=0; i<=extra; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    number=extra;
    for(int i=1; i<=number; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(int k=i; k<=number; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}