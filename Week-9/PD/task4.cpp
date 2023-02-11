#include<iostream>
using namespace std;
main()
{
    bool isFound=false;
    int arrSize;
    cout<<"Enter the Size of Array: ";
    cin>>arrSize;
    int digits[arrSize];
    for(int x=0; x<arrSize; x++)
    {
        cout<<"Enter a Number: ";
        cin>>digits[x];
    }
    for(int x=0; x<arrSize; x++)
    {
        if(digits[x]==7)
        {
            isFound=true;
        }
    }
    if(isFound==true)
    cout<<"BOOM!";
    else
    cout<<"There is no 7 in the Array!";
}