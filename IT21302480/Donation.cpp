#include<iostream>
#include<cstring>
#include "Donation.h"
using namespace std;

#define SIZE 2

Donation::Donation() 
{
   //Default constructor
}

Donation::Donation(const char id[], const char date[], float amount, Unregistered_User* r2)
{
    strcpy_s(DonationID, id);
    strcpy_s(Donation_Date, date);
    Donation_Amount = amount;
    r1 = r2;
    r1->addDonation(this);

}

void Donation::Display_Details()
{
   //implement Display Donation details

}

Donation::~Donation()
{
    //destructor
}