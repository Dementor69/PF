#include<iostream>
using namespace std;
main()
{
    int arrSize;
    cout<<"Enter the Size of Array: ";
    cin>>arrSize;
    int number[arrSize];
    for(int x=0; x<arrSize; x++)
    {
        cout<<"Enter a Number: ";
        cin>>number[x];
    }
    for(int x=arrSize-1; x>=0;x--)
    {
        cout<<number[x]<<endl;
    }
}