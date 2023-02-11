#include<iostream>
using namespace std;
main()
{
    bool isFound=true;
    string word[4];
    for(int x=0; x<4; x++)
    {
        cout<<"Enter a Word: ";
        cin>>word[x];
    }
    for(int x=0; x<3; x++)
    {
        if(word[x]!=word[x+1])
        {
            isFound=false;
            break;
        }
    }
    if(isFound==false)
    cout<<"False!";
    else
    cout<<"True!";
}