#include<iostream>
using namespace std;
main()
{
string movie;
float adultPrice, childPrice, adultTicket, childTicket, donationPerc, totalAmount, afterDonation;
cout<<"Enter Movie Name: ";
cin>>movie;
cout<<"Enter Adult Ticket Price: ";
cin>>adultPrice;
cout<<"Enter Child Ticket Price: ";
cin>>childPrice;
cout<<"Enter Number of Adult Tickets Sold: ";
cin>>adultTicket;
cout<<"Enter Number of Child Tickets Sold: ";
cin>>childTicket;
cout<<"Enter Percentage to Donate: ";
cin>>donationPerc;
totalAmount=(adultPrice*adultTicket)+(childPrice*childTicket);
afterDonation=totalAmount-(totalAmount*donationPerc/100);
cout<<"Total Amount Generated: "<<totalAmount<<endl;
cout<<"Amount after Donation: "<<afterDonation;
} 