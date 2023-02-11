#include<iostream>
#include<windows.h>
using namespace std;
void amount(int bill);
main()
{
 system("cls");
 float redRose, whiteRose, tulip, bill;
 cout<<"Enter the number of Red Roses you want: ";
 cin>>redRose;
 cout<<"Enter the number of White Roses you want: ";
 cin>>whiteRose;
 cout<<"Enter the number of Tulips you want: ";
 cin>>tulip;
 bill=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
 amount(bill);
}

void amount(int bill)
{
 if(bill>200)
 {
  int price=bill-(bill*20/100);
  cout<<"Original Price: "<<bill<<endl<<"Price after Discount: "<<price<<endl;
 }
 if(bill<200)
 {
  cout<<"Amount to be Payed: "<<bill;
 }
}