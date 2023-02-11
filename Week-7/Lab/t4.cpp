#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    printTable(number);
}

void printTable(int number)
{
    for(int i=1; i<=10; i++)
    {
        int table=number*i;
        cout<<number<<" x "<<i<<" = "<<table<<endl;
    }
}