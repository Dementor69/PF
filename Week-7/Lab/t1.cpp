#include <iostream>
using namespace std;
void series(int number);
main()
{
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    series(number);
}

void series(int number)
{
    int num1=0, num2=1;
    cout<<num1<<", "<<num2<<", ";
    for(int i=1; i<=number-2; i++)
    {
        int result=num1+num2;
        cout<<result<<", ";
        num1=num2;
        num2=result;
    }
}