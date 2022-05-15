#ifndef  RESER //File guard
#define  RESER
#include "payment.h"
#include "registered_user.h"

class registered_user;
class reservation;

class reservation {
    private :
    char resesrvationID[10];
    char reservation_Time[20];
    char reservation_Date[20];
    payment *pay1; //composition connection with reservation and payment
    registered_user *c1; //unidirectional connection with registered user and reservation
    public :
    reservation();
    reservation(const char newreservationID[],const char newreservation_Time[],const char newreservation_Date[],payment *pay);
//Parameterized constructor
    void addRegUserR(registered_user *c3);
    void displayDetails();
    ~reservation();
};
#endif