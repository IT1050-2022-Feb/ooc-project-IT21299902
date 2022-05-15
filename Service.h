#pragma once
#include<iostream>

#define SIZE 4

class Service
{

private:
	char serviceId[20];
	char serviceType[30];
	char serviceName[80];
	float ChargPerhour;

public:
	Service();
	Service(const char id[], const char type[], const char name[], float charge);
	void DisplayDetails();

};

class System_Admin {

private:
	char adminId[20];
	char adminName[30];
	Service* ser[SIZE];

public:
	System_Admin();
	void SetDetails(const char adminId[], const char admin_Name[]);
	void addService(Service* s1, Service* s2 , Service *s3 , Service *s4);
	void DisplayDetails();

};

