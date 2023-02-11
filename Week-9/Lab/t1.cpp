#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a Word: ";
    cin>>word;
    for(int x=0; word[x]!='\0'; x++)
    {
        cout<<word[x]<<" is stored at location "<<x<<endl;
    }
}