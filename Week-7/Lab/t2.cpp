#include <iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number, result;
    cout<<"Enter a Number: ";
    cin>>number;
    result=totalDigits(number);
    cout<<"The Number "<<number<<" has "<<result<<" digits";
}

int totalDigits(int number)
{
    int result=0;
    while(number>0)
    {
        number=number/10;
        result++;
    }
    return result;
}