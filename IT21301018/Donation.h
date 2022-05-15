#ifndef REGUSER
#define REGUSER
// Donation class
#include "Registered_User.h"
class Registered_User;

class Donation {
private:
	char donationId[10];
	char donationDate[50];
	float donationAmount;
	Registered_User* reguser;

public:
	Donation();
	void setDetails(char did[], char ddate[], float amount);
	void displayDetails();
};
#endif