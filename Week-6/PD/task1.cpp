#include <iostream>
using namespace std;
string activity(string temperature, string humidity);
main()
{
    string temperature, humidity, result;
    cout<<"Enter the Temperature: ";
    cin>>temperature;
    cout<<"Enter the Humidity: ";
    cin>>humidity;
    result=activity(temperature, humidity);
    cout<<result;
}

string activity(string temperature, string humidity)
{
    string result;
    if(temperature=="warm"&&humidity=="dry")
    result="Play Tennis!";
    if(temperature=="warm"&&humidity=="humid")
    result="Swim!";
    if(temperature=="cold"&&humidity=="dry")
    result="Play Basketball!";
    if(temperature=="cold"&&humidity=="humid")
    result="Watch TV!";
    return result;
}