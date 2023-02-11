#include <iostream>
using namespace std;
main()
{
    float count, tonnage, minibus=0, truck=0, train=0, sum, prcntMinibus, prcntTruck, prcntTrain, average;
    cout<<"Enter the Total Number of Cargo: ";
    cin>>count;
    for(int x=1; x<=count; x++)
    {
        cout<<"Enter the Weight of Cargo in tons: ";
        cin>>tonnage;
        if(tonnage<=3)
        {
            minibus=minibus+tonnage;
        }
        if(tonnage>3&&tonnage<=11)
        {
            truck=truck+tonnage;
        }
        if(tonnage>11)
        {
            train=train+tonnage;
        }
    }
    sum=minibus+truck+train;
    prcntMinibus=(minibus/sum)*100;
    prcntTruck=(truck/sum)*100;
    prcntTrain=(train/sum)*100;
    average=(minibus*200+truck*175+train*120)/sum;
    cout<<"Average Price per ton of carries cargo is "<<average<<endl;
    cout<<"Percentage of Cargo via Minibus is "<<prcntMinibus<<"%"<<endl;
    cout<<"Percentage of Cargo via Truck is "<<prcntTruck<<"%"<<endl;
    cout<<"Percentage of Cargo via Train is "<<prcntTrain<<"%"<<endl;
}