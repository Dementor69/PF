#include<iostream>
using namespace std;
string personTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string title;
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<"Enter your Gender: ";
    cin>>gender;
    title=personTitle(age, gender);
    cout<<"The Person Should be called as "<<title;
}

string personTitle(int age, char gender)
{
    string title;
    if(age>=16&&gender=='m')
    {
        title="Mr.";
    }
    if(age<16&&gender=='m')
    {
        title="Master";
    }
    if(age>=16&&gender=='f')
    {
        title="Ms.";
    }
    if(age<16&&gender=='f')
    {
        title="Miss";
    }
    return title;
}