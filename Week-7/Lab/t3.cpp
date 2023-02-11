#include <iostream>
using namespace std;
int frequency(int number, int digit);
main()
{
    int number, digit, result;
    cout<<"Enter a Number: ";
    cin>>number;
    cout<<"Enter the Digit you want to Check Frequency of: ";
    cin>>digit;
    result=frequency(number, digit);
    cout<<"In number "<<number<<", "<<digit<<" occurs "<<result<<" times.";
}

int frequency(int number, int digit)
{
    int result=0, mod;
    while(number>0)
    {
        mod=number%10;
        number=number/10;
        if(mod==digit)
        result++;
    }
    return result;
}