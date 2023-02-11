#include<iostream>
#include<windows.h>
using namespace std;
void printMenu();
void aggregate(string name, float matric, float inter, float ecat);
void compare(string std1, float marks1, string std2, float marks2);
main()
{
 system("cls");
 printMenu();
 string name;
 float matric, inter, ecat;
 cout<<"Enter your Name: ";
 cin>>name;
 cout<<"Enter Marks in Matric: ";
 cin>>matric;
 cout<<"Enter Marks in Intermediate: ";
 cin>>inter;
 cout<<"Enter Marks in ECAT: ";
 cin>>ecat;
 aggregate(name, matric, inter, ecat);
 string std1, std2;
 float marks1, marks2;
 cout<<"Enter first Student Name: ";
 cin>>std1;
 cout<<"Enter first Student Marks: ";
 cin>>marks1;
 cout<<"Enter second Student Name: ";
 cin>>std2;
 cout<<"Enter second Student Marks: ";
 cin>>marks2;
 compare(std1, marks1, std2, marks2); 
}


void printMenu()
{
 cout<<"*       *         *******         *********"<<endl;
 cout<<"*       *         *                   *    "<<endl;
 cout<<"*       *         *******             *    "<<endl;
 cout<<"*       *         *                   *    "<<endl;
 cout<<"  * * *           *******             *    "<<endl;
}

void aggregate(string name, float matric, float inter, float ecat)
{
 float agg=(matric/1100*100)*30/100+(inter/550*100)*30/100+(ecat/400*100)*40/100;
 cout<<"The Aggregate of the Student is "<<agg<<endl;
}

void compare(string std1, float marks1, string std2, float marks2)
{
 if(marks1>marks2)
 {
  cout<<std1<<" has ROLL NO 1 !"<<endl<<std2<<" has ROLL NO 2 !";
 }
 if(marks2>marks1)
 {
  cout<<std2<<" has ROLL NO 1 !"<<endl<<std1<<" has ROLL NO 2 !";
 }
}