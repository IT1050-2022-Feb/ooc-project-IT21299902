#include "payment.h"
#include <iostream>
#include <cstring>
using namespace std;
payment::payment(){
    
}

payment::payment(const char newpaymentID[],const char newpaymentType[],const char newPayment_Status[],float newttotal_Amount){
    strcpy(paymentID,newpaymentID);   strcpy(paymentType,newpaymentType);
    strcpy(payment_Status,newPayment_Status); total_Amount=newttotal_Amount;
}

float payment::getamount(){
    return total_Amount;
}

void payment::displayDetails(){
    cout << "--------" << endl;
    cout << "\n Payment ID =" << paymentID   << "\n" ;
    cout << " Payment Type =" << paymentType   << "\n" ;
    cout << " Payment Status =" <<  payment_Status  << "\n" ;
    cout << " Total Amount =" << total_Amount   << "\n" ;
    cout << "--------" << endl;
}
payment::~payment(){
    cout << "payment closed..." << endl;
}