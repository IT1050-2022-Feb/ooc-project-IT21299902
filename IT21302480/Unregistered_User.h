#include "Donation"

#define SIZE 2

class Unregistered_User
{

private:
	char Name[30];
	char Phone_Number[15];
	char Email_Address[50];
	Donation* d1[SIZE];
	int numberOFDonations;

public:
	Unregistered_User();
	Unregistered_User(const char name[], const char no[], const char add[]);
	void addDonation(Donation* d2);
	void DisplayDetails();
	~Unregistered_User();
};