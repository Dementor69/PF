#include<iostream>
using namespace std;
main()
{
    int count=0;
    char letter;
    string word;
    cout<<"Enter a Word: ";
    cin>>word;
    cout<<"Enter the Letter for Check: ";
    cin>>letter;
    for(int x=0; word[x]!='\0'; x++)
    {
        count++;
    }
    if(letter==word[count-1])
    cout<<"True!";
    else
    cout<<"False!";
}