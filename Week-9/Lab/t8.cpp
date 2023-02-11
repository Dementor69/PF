#include<iostream>
using namespace std;
main()
{
    int largest=-1;
    int arrSize;
    cout<<"Enter the Size of Array: ";
    cin>>arrSize;
    int number[arrSize];
    for(int x=0; x<arrSize; x++)
    {
        cout<<"Enter a Number: ";
        cin>>number[x];
    }
    for(int x=0; x<arrSize; x++)
    {
        if(number[x]>largest)
        largest=number[x];
    }
    cout<<largest<<" is Largest!";
}