#include<iostream>
using namespace std;
main()
{
    string word;
    int length=0;
    cout<<"Enter a Word: ";
    cin>>word;
    length=word.length();
    if(length%2==0)
    cout<<"True!";
    else
    cout<<"False!";
}