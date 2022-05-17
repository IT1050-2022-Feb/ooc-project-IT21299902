#include "Vet.h"
#include "reservation.h"
#include <iostream>
#include <cstring>
using namespace std;


reservation::reservation(){
    
}

reservation::reservation(const char newreservationID[],const char newreservation_Time[],const char newreservation_Date[],payment *pay){
    strcpy(resesrvationID,newreservationID); 
    strcpy(reservation_Time,newreservation_Time);
    strcpy(reservation_Date,newreservation_Date); 
    pay1=pay;

}

void reservation::addVet(Vet *v2){
    v1=v2;
    v1->addreservation(this);
}

void reservation::addRegUserR(registered_user *c3){
    c1=c3;
    c1->addreservation(this);
}

void reservation::displayDetailsReservation(){
  cout << "--------" << endl;
   cout << "\n Reservation ID =" << resesrvationID << "\n" ;
   cout << " Reservation Time =" << reservation_Time << "\n" ;
   cout << " Reservation Date =" << reservation_Date<< "\n" ;
  cout << "--------" << endl;
}

void reservation::displayDetailswithPayment(){
  cout << "--------" << endl;
   cout << "\n Reservation ID =" << resesrvationID << "\n" ;
   cout << " Reservation Time =" << reservation_Time << "\n" ;
   cout << " Reservation Date =" << reservation_Date<< "\n" ;
   pay1->displayDetails();
  cout << "--------" << endl;
}

reservation::~reservation(){
   delete pay1; 
   cout << "Reservation closed..." << endl;
}
