#include<iostream>
using namespace std;
main()
{
float marks1, marks2, marks3, total, avg;
cout<<"Enter the Marks of the First Student: ";
cin>>marks1;
cout<<"Enter the Marks of the Second Student: ";
cin>>marks2;
cout<<"Enter the Marks of the Third Student: ";
cin>>marks3;
cout<<"Enter Total Marks: ";
cin>>total;
avg=(marks1+marks2+marks3)/(total*3)*100;
cout<<"The Average of the Class is "<<avg;
}
