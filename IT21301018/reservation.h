
#include"Service.h"

class reservation {
private:
    char resesrvationID[10];
    char reservation_Time[20];
    char reservation_Date[20];
    Service*service;
public:
    reservation();
    void setDetails(const char newreservationID[], const char newreservation_Time[], const char newreservation_Date[] );
    void displayDetails();
};
