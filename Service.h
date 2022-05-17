#ifndef SER
#define SER
#include "reservation.h"
#define SIZE6 2
class reservation;
class Service 
{

private:
	char serviceId[20];
	char serviceType[30];
	char serviceName[80];
	float ChargPerhour;
	reservation* rev[SIZE6];
	int noOFreservation;

public:
	Service(); //default constructor
	Service(const char id[], const char type[], const char name[], float charge); //parameterized constructor
	void addreservation(reservation *rev1);
	void DisplayDetailsReservation();
	void DisplayServDetails();
  ~Service();

};
#endif
