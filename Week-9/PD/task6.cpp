#include<iostream>
using namespace std;
main()
{
    int transformation;
    int digits[3];
    for(int x=0; x<3; x++)
    {
        cout<<"Enter a Number: ";
        cin>>digits[x];
    }
    cout<<"Enter the Number of Times the Transformation needs to be done: ";
    cin>>transformation;
    for(int x=0; x<3; x++)
    {
        for(int i=0; i<transformation; i++)
        {
            if(digits[x]%2==0)
            {
                digits[x]=digits[x]-2;
            }
            else
            {
                digits[x]=digits[x]+2;
            }
        }
    }
    cout<<"["<<digits[0]<<", "<<digits[1]<<", "<<digits[2]<<"]";
}