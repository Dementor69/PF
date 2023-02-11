#include<iostream>
#include<windows.h>
using namespace std;
void trueFalse(string condition);
main()
{
 system("cls");
 string cond;
 cout<<"Enter either True or False: ";
 cin>>cond;
 trueFalse(cond);
}

void trueFalse(string condition)
{
 if(condition=="True")
 {
  cout<<"False";
 }
 if(condition=="False")
 {
  cout<<"True";
 }
}