#include<cstring>
#include<iostream>
using namespace std;
#include"reservation.h"
reservation::reservation() {

}

void reservation::setDetails(const char newreservationID[], const char newreservation_Time[], const char newreservation_Date[]) {
    strcpy_s(resesrvationID, newreservationID);
    strcpy_s(reservation_Time, newreservation_Time);
    strcpy_s(reservation_Date, newreservation_Date);
    
    

}

void reservation::displayDetails() {
    cout << "\n Reservation ID =" << resesrvationID << "\n";
    cout << " Reservation Time =" << reservation_Time << "\n";
    cout << " Reservation Date =" << reservation_Date << "\n";
}

reservation::~reservation() {
    cout << "Reservation closed..." << endl;
}