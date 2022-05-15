
#include "Service.h" //connecting service header file
#include<cstring>
#include<iostream>

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

void Service::DisplayServDetails() {

}

Service::~Service(){
  //destructor
}








