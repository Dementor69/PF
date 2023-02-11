#include <iostream>
using namespace std;
main()
{
    int rows;
    cout<<"Enter the Number of Rows: ";
    cin>>rows;
    for(int outer=rows; outer>=1; outer--)
    {
        int inner=1;
        while(inner<=outer)
        {
            cout<<"*";
            inner++;
        }
        cout<<endl;
    }
}