#ifndef RES
#define RES
#include "Vet.h"
#include "payment.h"
#include "registered_user.h"

class registered_user;
class Vet;
class reservation;
 

class reservation {
    private :
    char resesrvationID[10];
    char reservation_Time[20];
    char reservation_Date[20];
    payment *pay1;
    registered_user *c1;
    Vet *v1;
    public :
    reservation();
    reservation(const char newreservationID[],const char newreservation_Time[],const char newreservation_Date[],payment *pay);
    void addVet(Vet *v2);
    void addRegUserR(registered_user *c3);
    void displayDetailsReservation();
    void displayDetailswithPayment();
    ~reservation();
};
#endif
