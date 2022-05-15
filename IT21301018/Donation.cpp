//implementing the donation class
#include "Donation.h"
#include<cstring>
#include<iostream>
using namespace std;

Donation::Donation() {
	strcpy(donationId, "0");
	strcpy(donationDate, "");
	donationAmount = 00.00;
}

void Donation::setDetails(char did[], char ddate[], float amount) {
	strcpy(donationId, did);
	strcpy(donationDate, ddate);
	donationAmount = amount;
}

void Donation::displayDetails() {
	cout << "Donation Id : " << donationId << endl;
	cout << "Donation Date : " << donationDate << endl;
	cout << "Donation Amount : " << donationAmount << endl;
}