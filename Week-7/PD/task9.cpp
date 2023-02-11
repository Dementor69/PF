#include <iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(int k=i+1; (k<=(number*2)-i); k++)
        {
            cout<<" ";
        }
        for(int l=number-i; l<number; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
