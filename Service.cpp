#include "Service.h"
#include<cstring>
#include<iostream>
#define SIZE 4

using namespace std;


Service::Service() {

	strcpy_s(serviceId, "0");
	strcpy_s(serviceName, "");
	strcpy_s(serviceType, "");
	ChargPerhour = 0.0;
}

Service::Service(const char id[], const char type[], const char name[], float charge) {

	strcpy_s(serviceId,id);
	strcpy_s(serviceName,name);
	strcpy_s(serviceType,type);
	ChargPerhour = charge;
	                

}

void Service::DisplayDetails() {

	cout << "-----------------------------------------------" << endl;
	cout << "Service ID      --> " << serviceId << endl;
	cout << "Service Type    --> " << serviceType << endl;
	cout << "Service name    --> " << serviceName  << endl;
	cout << "Service charge  --> " << ChargPerhour << endl << endl;
	cout << "-----------------------------------------------" << endl;

}

System_Admin::System_Admin() {

	strcpy_s(adminId, "0");
	strcpy_s(adminName,"");
}



void System_Admin::SetDetails(const char a_Id[], const char admin_Name[]) {

	strcpy_s(adminId, a_Id);
	strcpy_s(adminName, admin_Name);


}

void System_Admin::addService(Service* s1, Service* s2, Service* s3, Service* s4){
	ser[0] = s1;
	ser[1] = s2;
	ser[2] = s3;
	ser[3] = s4;
}

void System_Admin::DisplayDetails() {

	cout << "------------------------------------------" << endl;
	cout << "Admin ID   --> " << adminId << endl;
	cout << "Admin Name --> " << adminName << endl << endl;

	for (int i = 0; i < SIZE; i++) {
		ser[i]->DisplayDetails();
	}
	cout << "------------------------------------------" << endl;
}



