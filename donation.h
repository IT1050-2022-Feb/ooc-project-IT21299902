#ifndef DON
#define DON
#include "Unregistered_User.h"
#include "registered_user.h"

class Unregistered_User;

class Donation
{
private:
	char DonationID[30];
	char Donation_Date[30];
	float Donation_Amount;
	Unregistered_User* r1;
    registered_user* reguser;

public:
	Donation();
	Donation(const char id[], const char date[], float amount);
    void addUnregUser(Unregistered_User* r2);
    void addRegUser(registered_user* newreg);
	void Display_Details();
	~Donation();
};
#endif
