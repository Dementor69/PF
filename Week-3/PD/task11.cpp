#include<iostream>
using namespace std;
main()
{
int number, mod1, mod2, mod3, mod4, result;
cout<<"Enter a Four Digit Number: ";
cin>>number;
mod4=number%10;
number=number/10;
mod3=number%10;
number=number/10;
mod2=number%10;
number=number/10;
mod1=number%10;
cout<<"Position 1= "<<mod1<<endl;
cout<<"Position 2= "<<mod2<<endl;
cout<<"Position 3= "<<mod3<<endl;
cout<<"Position 4= "<<mod4<<endl;
result=(mod1+mod3)+(mod2*mod4);
cout<<"The Result is "<<result;
}

