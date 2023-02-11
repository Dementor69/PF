#include<iostream>
using namespace std;
main()
{
string name;
float sub1, sub2, sub3, sub4, sub5, obt, perc;
cout<<"Enter Your Name: ";
cin>>name;
cout<<"Enter Subject 1 marks: ";
cin>>sub1;
cout<<"Enter Subject 2 marks: ";
cin>>sub2;
cout<<"Enter Subject 3 marks: ";
cin>>sub3;
cout<<"Enter Subject 4 marks: ";
cin>>sub4;
cout<<"Enter Subject 5 marks: ";
cin>>sub5;
obt=sub1+sub2+sub3+sub4+sub5;
perc=(obt/500)*100;
cout<<"Your Percentage is "<<perc;
}