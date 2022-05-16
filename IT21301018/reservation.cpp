#include<cstring>
#include<iostream>
using namespace std;
#include"reservation.h"
reservation::reservation() {

}

void reservation::setDetails(const char newreservationID[], const char newreservation_Time[], const char newreservation_Date[]) {
    strcpy(resesrvationID, newreservationID);
    strcpy(reservation_Time, newreservation_Time);
    strcpy(reservation_Date, newreservation_Date);
    
    

}

void reservation::displayDetails() {
    
}

reservation::~reservation() {
    cout << "Reservation closed..." << endl;
}