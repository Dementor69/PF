#include <iostream>
using namespace std;
bool greaterNumber(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    cout<<"Enter the First number:";
    cin>>num1;
    cout<<"Enter the Second number:";
    cin>>num2;
    cout<<"Enter the Third number:";
    cin>>num3;
    greaterNumber(num1, num2, num3);
}

bool greaterNumber(int num1, int num2, int num3)
{
    if(num1==num2&&num2==num3)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}