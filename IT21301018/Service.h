#ifndef SERV
#define SERV
#include"reservations.h"
class Service {
private:
    char serviceId[10];
    char serviceType[20];
    reservation* res[4];
public:
    Service();
    void setDetails(char id[], char type[]);
    void displayDetails();
};
#endif