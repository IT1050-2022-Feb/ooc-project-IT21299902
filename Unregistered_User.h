#ifndef UN
#define UN
#include "donation.h"
#include"user.h"
#define SIZE2 2 
class Donation;
class Unregistered_User : public User{ //inheritence to user class
private:
    int numberOFDonations;
    Donation *d1[SIZE2];


public:
	Unregistered_User();
	Unregistered_User(const char name[], const char no[], const char add[]);
  void setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]);
	void addDonation(Donation* d2);
	void DisplayDetails(); //default costructor
	void DisplayUnRegDetails();
  void DisplayDetailsUser();
};
#endif
