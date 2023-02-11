#include<iostream>
#include<windows.h>
using namespace std;
main()
{
 system("cls");
 int holiday, workday, gameTime, difference, hour, minute;
 cout<<"Enter the number of Holidays in the Year: ";
 cin>>holiday;
 workday=365-holiday;
 gameTime=(workday*63)+(holiday*127);
 difference=30000-gameTime;
 if(difference>0)
 {
  hour=difference/60;
  minute=difference%60;
  cout<<"Tom sleeps well!"<<endl<<hour<<" hours and "<<minute<<" minutes less for play.";
 }
 if(difference<0)
 {
  hour=-difference/60;
  minute=-difference%60;
  cout<<"Tom will run away!"<<endl<<hour<<" hours and "<< minute<<" minutes for play.";
 }
}