
#include<iostream>
#include<cstring>
#include"Unregistered_User.h"
#define SIZE12 2
using namespace std ;

//default constructor
Unregistered_User::Unregistered_User() {
   
	strcpy(name, "");
	strcpy(Tp_No, "0000000000");
	strcpy(Email, "");
	strcpy(Address, "");
	strcpy(DOB, "00 / 00 / 0000");


}


void Unregistered_User::addDonation(Donation* d2) {
    if (numberOFDonations < SIZE12) {
        d1[numberOFDonations] = d2;
        numberOFDonations++;
    }
}

//impliment display function


void Unregistered_User::DisplayDetails() {

  cout << "--------" << endl;
    cout << "Name : " << name << endl;
    cout << "User Name : " << Tp_No << endl;
    cout << "Email_Address : " << Address << endl;

    for (int i = 0; i < numberOFDonations; i++)
        d1[i]->Display_Details();


    cout << "---------"<<endl;
}
void Unregistered_User::setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]){
  strcpy(name, U_name);
	strcpy(Tp_No, u_Tp_NO);
	strcpy(Email, u_Email);
	strcpy(Address, u_Address);
	strcpy(DOB, u_DOB);
}



 void Unregistered_User::DisplayDetailsUser(){

	cout << "\n----------" << endl;
	cout << "Name      -->" << name << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl<<endl;
	cout << "------" << endl;


}

void Unregistered_User::DisplayUnRegDetails() {

 //display function implimentation

}
