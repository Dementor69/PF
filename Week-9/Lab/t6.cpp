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
        if(word[x]=='a'||word[x]=='e'||word[x]=='i'||word[x]=='o'||word[x]=='u')
        count++;
    }
    cout<<"The Word "<<word<<" has "<<count<<" Vowels.";
}