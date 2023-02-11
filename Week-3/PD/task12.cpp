#include<iostream>
using namespace std;
main()
{
float date, month, year, res1, res2, age;
cout<<"Enter Your Birth Date: ";
cin>>date;
cout<<"Enter Your Birth Month: ";
cin>>month;
cout<<"Enter Your Birth Year: ";
cin>>year;
res1=((month*30)+date)/365;
res2=2022-year;
age=res1+res2;
cout<<"The Age in Years would be "<<age<<" Years";
}