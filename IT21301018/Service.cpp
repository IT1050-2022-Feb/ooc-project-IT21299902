#include<cstring>
#include<iostream>
using namespace std;
#include"Service.h"
Service::Service() {
    strcpy_s(serviceId, "0");
    strcpy_s(serviceType, "");
}
void Service::setDetails(char id[], char type[]) {
    strcpy_s(serviceId,id);
    strcpy_s(serviceType,type);
}
void Service::displayDetails() {
    cout << "Service Id : " << serviceId << endl;
    cout << "Service Type : " << serviceType << endl;
}
