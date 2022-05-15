#include "reservation.h"
#include <iostream>
#include <cstring>
using namespace std;

reservation::reservation(){
    pay1 = new payment(" "," "," ",0.00);
  //default constructor
}

reservation::reservation(const char newreservationID[],const char newreservation_Time[],const char newreservation_Date[],payment *pay){
    strcpy(resesrvationID,newreservationID); 
    strcpy(reservation_Time,newreservation_Time);
    strcpy(reservation_Date,newreservation_Date); 
    pay1=pay;

}
void reservation::addRegUserR(registered_user *c3){
    c1=c3;
    c1->addreservation(this);
    //adding registered users to reservation
}
void reservation::displayDetails(){
   cout << "\n Reservation ID =" << resesrvationID << "\n" ;
   cout << " Reservation Time =" << reservation_Time << "\n" ;
   cout << " Reservation Date =" << reservation_Date<< "\n" ;
   pay1->displayDetails();
}

reservation::~reservation(){
   delete pay1; //deleting the payments because its composition
   cout << "Reservation closed..." << endl;
}
