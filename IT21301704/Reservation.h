#include "vet.h"

class reservation //implimenting Reservation class
{
    private :
    char resesrvationID[10];
    char reservation_Time[20];
    char reservation_Date[20];
    Vet *c1;
    public :
    reservation();
    reservation(const char newreservationID[],const char newreservation_Time[],const char newreservation_Date[],Vet *c2);
    void displayDetails();
    ~reservation();
};