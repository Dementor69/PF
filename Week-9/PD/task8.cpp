#include<iostream>
using namespace std;
main()
{
    int arrSize, length, colouring, switching=0, result;
    cout<<"Enter the Size of Array: ";
    cin>>arrSize;
    string colours[arrSize];
    for(int x=0; x<arrSize; x++)
    {
        cout<<"Enter the Colour: ";
        cin>>colours[x];
    }
    colouring=arrSize*2;
    for(int x=0; x<arrSize-1; x++)
    {
        if(colours[x]!=colours[x+1])
        {
            switching++;
        }
    }
    result=colouring+switching;
    cout<<"The Time required is "<<result;
}