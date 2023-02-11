#include<iostream>
#include<windows.h>
using namespace std;
void speedCheck(int speed);
main()
{
 system("cls");
 int speed;
 cout<<"What's the Speed of Car in kph: ";
 cin>>speed;
 speedCheck(speed);
}

void speedCheck(int speed)
{
 if(speed<=100)
 {
  cout<<"Perfect! You're going good.";
 }
 if(speed>100)
 {
  cout<<"Halt....YOU WILL BE CHALLENGED!!!";
 }
}