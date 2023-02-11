#include<iostream>
#include<windows.h>
using namespace std;
int pyramidVolume(int length, int width, int height);
main()
{
    int length, width, height, choice, volume;
    string unit;
    cout<<"Enter Length of the Pyramid: ";
    cin>>length;
    cout<<"Enter Width of the Pyramid: ";
    cin>>width;
    cout<<"Enter Height of thePyramid: ";
    cin>>height;
    cout<<"If you want the Output in millimetre (Enter 1)"<<endl;
    cout<<"If you want the Output in centimetre (Enter 2)"<<endl;
    cout<<"If you want the Output in metre (Enter 3)"<<endl;
    cout<<"If you want the Output in kilometre (Enter 4)"<<endl;
    cin>>choice;
    if(choice==1)
    {
      volume=pyramidVolume(length, width, height);
      volume=volume*1000*1000*1000;
      unit=unit;
      cout<<"The Volume of the Pyramid is "<<volume<<" cubic "<<" millimetre";
    }
    if(choice==2)
    {
        volume=pyramidVolume(length, width, height);
        volume=volume*100*100*100;
      unit=unit;
      cout<<"The Volume of the Pyramid is "<<volume<<" cubic "<<" centimetre";
    }
    if(choice==3)
    {
        volume=pyramidVolume(length, width, height);
        volume=volume;
      unit=unit;
      cout<<"The Volume of the Pyramid is "<<volume<<" cubic "<<" metre";
    }
    if(choice==4)
    {
        volume=pyramidVolume(length, width, height);
        volume=volume/1000;
      unit=unit;
      cout<<"The Volume of the Pyramid is "<<volume<<" cubic "<<" kilometre";
    }
    

}

int pyramidVolume(int length, int width, int height)
{
    int volume=(length*width*height)/3;
    return volume;
}