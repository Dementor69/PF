#include<iostream>
using namespace std;
main()
{
    int count=0;
    string word;
    cout<<"Enter a Word: ";
    cin>>word;
    for(int x=0; word[x]!='\0'; x++)
    {
        count++;
    }
    if(count%2==0)
    cout<<"True!";
    else
    cout<<"False!";
}