#include<iostream>
#include<windows.h>
using namespace std;
void discount(int price, string country);
main()
{
 system("cls");
 string country;
 int price;
 while(true)
 {
  cout<<"Enter Country Name: ";
  cin>>country;
  cout<<"Enter Ticket Price: ";
  cin>>price;
  discount(price, country);
 }
}

void discount(int price, string country)
{
 if(country=="Pakistan")
 {
  int result=price-(price*5/100);
  cout<<"The Final Price of Ticket is "<<result<<endl;
 }
 if(country=="Ireland")
 {
  int result=price-(price*10/100);
  cout<<"The Final Price of Ticket is "<<result<<endl;
 }
 if(country=="India")
 {
  int result=price-(price*20/100);
  cout<<"The Final Price of Ticket is "<<result<<endl;
 }
 if(country=="England")
 {
  int result=price-(price*30/100);
  cout<<"The Final Price of Ticket is "<<result<<endl;
 }
 if(country=="Canada")
 {
  int result=price-(price*45/100);
  cout<<"The Final Price of Ticket is "<<result<<endl;
 }
}