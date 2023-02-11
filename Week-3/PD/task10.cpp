#include<iostream>
using namespace std;
main()
{
int number, mod1, mod2, mod3, mod4, result;
cout<<"Enter a Four Digit Number: ";
cin>>number;
mod1=number%10;
number=number/10;
mod2=number%10;
number=number/10;
mod3=number%10;
number=number/10;
mod4=number%10;
result=mod1+mod2+mod3+mod4;
cout<<"The Result is "<<result;
}
