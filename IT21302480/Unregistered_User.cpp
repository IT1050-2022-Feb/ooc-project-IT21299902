#include<iostream>
#include<cstring>
#include "Unregister_User.h"
using namespace std;

#define SIZE 2

Unregistered_User::Unregistered_User()
{
    //default constructor

}

Unregistered_User::Unregistered_User(const char name[], const char no[], const char add[])
{
    strcpy_s(Name, name);
    strcpy_s(Phone_Number, no);
    strcpy_s(Email_Address, add);
    numberOFDonations = 0;
}

void Unregistered_User::addDonation(Donation* d2)
{
   //Adding donations to Unregistered user
  if (numberOFDonations < SIZE) {
        d1[numberOFDonations] = d2;
        numberOFDonations++;
    }
}

void Unregistered_User::DisplayDetails() 
{

   //implement Unregistered user display implementation
  for (int i = 0; i < numberOFDonations; i++)
        d1[i]->Display_Details();
}

Unregistered_User::~Unregistered_User()
{
    //destructor

}