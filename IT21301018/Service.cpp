#include<cstring>
#include<iostream>
using namespace std;
#include"Service.h"

Service::Service() {
    strcpy(serviceId, "0");
    strcpy(serviceType, "");
}
void Service::setDetails(char id[], char type[]) {
    strcpy(serviceId,id);
    strcpy(serviceType,type);
}
void Service::displayDetails() {
  }
