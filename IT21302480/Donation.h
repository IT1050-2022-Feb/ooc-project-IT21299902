#include "Unregister_User"
class Donation
{
private:
	char DonationID[30];
	char Donation_Date[30];
	float Donation_Amount;
	Unregister_User* r1;

public:
	Donation();
	Donation(const char id[], const char date[], float amount, Unregister_User* r2);
	void Display_Details();
	~Donation();
};