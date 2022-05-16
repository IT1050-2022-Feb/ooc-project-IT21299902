#include <iostream>
#include <cstring>
#include "Reservation.h"
using namespace std ;

 // Default Contructor

reservation::reservation()
{
 
}
 // Implimenting set details function

reservation::reservation(const char newreservationID[],const char newreservation_Time[],const char newreservation_Date[],Vet *c2)
{
    strcpy(resesrvationID,newreservationID); 
    strcpy(reservation_Time,newreservation_Time);
    strcpy(reservation_Date,newreservation_Date); 
    c1=c2;
    c1->addreservation(this);

}
 // Implementing Reservation Details  function
void reservation::displayDetails() 
{
   cout << "\n Reservation ID =" << resesrvationID << "\n" ;
   cout << " Reservation Time =" << reservation_Time << "\n" ;
   cout << " Reservation Date =" << reservation_Date<< "\n" ;
}
// Destructor
reservation::~reservation() 
{
   cout << "Reservation closed..." << endl;
}