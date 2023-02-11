#include <iostream>
using namespace std;
int Sum(int number);
main()
{
    int number, result;
    cout<<"Enter a Number: ";
    cin>>number;
    result=Sum(number);
    cout<<"The Sum of the Digits of number "<<number<<" is "<<result;
}

int Sum(int number)
{
    int mod, result=0;
    while(number>0)
    {
        mod=number%10;
        number=number/10;
        result=result+mod;
    }
    return result;
}