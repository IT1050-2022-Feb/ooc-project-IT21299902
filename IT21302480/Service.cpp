#include "Service.h"
#include<iostream>
#include<cstring>
using namespace std;


Service::Service()
{
      //default constructor

}

Service::Service(const char id[], const char type[])
{
	strcpy_s(ServiceID, id);
	strcpy_s(ServiceType, type);

}

void Service::DisplayDetails()
{

  //implement Display service details
}

Service::~Service()
{
	//destuctor
}
