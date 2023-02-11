#include <iostream>
using namespace std;
main()
{
    int total, number;
    float p2, p3, p4, count2=0, count3=0, count4=0;
    cout<<"Enter the Total Count of Numbers: ";
    cin>>total;
    for(int x=1; x<=total; x++)
    {
        cout<<"Enter Number: ";
        cin>>number;
        if(number%2==0)
        {
            count2++;
        }
        if(number%3==0)
        {
            count3++;
        }
        if(number%4==0)
        {
            count4++;
        }
    }
    p2=(count2/total)*100;
    p3=(count3/total)*100;
    p4=(count4/total)*100;
    cout<<"Percentage of Numbers Divisible by 2 is "<<p2<<"%"<<endl;
    cout<<"Percentage of Numbers Divisible by 3 is "<<p3<<"%"<<endl;
    cout<<"Percentage of Numbers Divisible by 4 is "<<p4<<"%"<<endl;
}