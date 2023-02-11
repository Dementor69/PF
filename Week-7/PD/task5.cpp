#include <iostream>
using namespace std;
int triangle(int number);
main()
{
    int number, result;
    cout<<"Enter the Number of Triangle: ";
    cin>>number;
    result=triangle(number);
    cout<<"The Triangle has "<<result<<" Dots.";
}

int triangle(int number)
{
    int dots;
    for(dots=number; number>0; number--)
    {
        dots=dots+(number-1);
    }
    return dots;
}