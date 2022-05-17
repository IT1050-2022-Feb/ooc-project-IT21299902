
#include "Service.h" //connecting service header file
#include<cstring>
#include<iostream>
#define SIZE13 2
using namespace std;


//defaul constructor
Service::Service() {

	strcpy(serviceId, "0");
	strcpy(serviceName, "");
	strcpy(serviceType, "");
	ChargPerhour = 0.0;
}


//parameterized constructore
Service::Service(const char id[], const char type[], const char name[], float charge) {

	strcpy(serviceId,id);
	strcpy(serviceName,name);
	strcpy(serviceType,type);
	ChargPerhour = charge;
	                

}
void Service::addreservation(reservation* rev1){
    if (noOFreservation < SIZE13)
	rev[noOFreservation] = rev1;
	noOFreservation++;

}

void Service::DisplayDetailsReservation()
{
	cout << "---------------------------------" << endl;
	cout << "Service ID : " << serviceId << endl;
	cout << "Service Type : " << serviceType << endl;
	cout << "Service Name : " << serviceName << endl;
	cout << "ChargPerhour : " << ChargPerhour << endl;

	for (int i = 0; i < noOFreservation; i++)
		rev[i]->displayDetailsReservation();

  cout << "--------" << endl;
}

void Service::DisplayServDetails() {
    cout << "---------" << endl;
	cout << "Service ID : " << serviceId << endl;
	cout << "Service Type : " << serviceType << endl;
	cout << "Service Name : " << serviceName << endl;
	cout << "ChargPerhour : " << ChargPerhour << endl;
	cout << "---------" << endl;

}

Service::~Service(){
  //destructor
}



