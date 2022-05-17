
#include<iostream>
#include<cstring>
#include "Unregistered_User.h"

#include "donation.h"
using namespace std;



Donation::Donation() 
{

}

Donation::Donation(const char id[], const char date[], float amount)
{
    strcpy(DonationID, id);
    strcpy(Donation_Date, date);
    Donation_Amount = amount;
    
}

void Donation::addUnregUser(Unregistered_User* r2){
    r1 = r2;
    r1->addDonation(this);
}

void Donation::addRegUser(registered_user* newreg){
    reguser = newreg;
    reguser->addDonation(this);
}


void Donation::Display_Details() {

    cout << "----------" << endl;

    cout << "Donation ID : " << DonationID << endl;
    cout << " Donation Date : " << Donation_Date << endl;
    cout << " Donation Amount Date : " << Donation_Amount << endl;

    cout << "----------" << endl;

}

Donation::~Donation()
{
    //destructor
}
