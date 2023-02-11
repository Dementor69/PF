#include<iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    float speed;
    string result;
    cout<<"Enter the speed: ";
    cin>>speed;
    result=checkspeed(speed);
    cout<<"The Vehicle is Travelling "<<result;
}

string checkspeed(float speed)
{
    string result;
    if(speed<=10)
    {
        result="Slow!";
    }
    if(speed>=10&&speed<=50)
    {
        result="Average!";
    }
    if(speed>=50&&speed<=150)
    {
        result="Fast!";
    }
    if(speed>=150&&speed<=1000)
    {
        result="Ultra-Fast!";
    }
    if(speed>=1000)
    {
        result="Extremely Fast!";
    }
    return result;
}