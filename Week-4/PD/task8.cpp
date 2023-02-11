#include<iostream>
#include<windows.h>
using namespace std;
void isEqual(int number1, int number2);
main()
{
 system("cls");
 int num1, num2;
 cout<<"Enter First Number: ";
 cin>>num1;
 cout<<"Enter Second Number: ";
 cin>>num2;
 isEqual(num1, num2);
}

void isEqual(int number1, int number2)
{
 if(number1==number2)
 {
  cout<<"TRUE!";
 }
 if(number1!=number2)
 {
  cout<<"FALSE!";
 }
}