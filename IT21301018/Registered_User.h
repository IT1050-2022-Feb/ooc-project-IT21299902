#ifndef REGUSER
#define REGUSER
#include"Donation.h"
#include"Feedback.h"
class Donation;
class Registered_User {


private:
	char userId[20];
	char name[40];
	char Email[60];
	Donation*donation[4];

public:
	Registered_User();
	void SetDetails(const char u_UserId[], const char u_UserName[], const char u_email[]);
	void DisplayDetails();

};
#endif