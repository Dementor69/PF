#include<iostream>
using namespace std;
main()
{
    string movieName;
    int price=500, bill;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRaider"};
    cout<<"Enter the Name of Movie: ";
    cin>>movieName;
    for(int x=0; x<5; x++)
    {
        if(movies[x]==movieName)
        {
            if(x%2==1)
            {
                bill=price-25;
            }
            else
            {
                bill=price-50;
            }
        }
    }
    cout<<"The Price of Ticket for Movie: "<<movieName<<" is "<<bill;
}