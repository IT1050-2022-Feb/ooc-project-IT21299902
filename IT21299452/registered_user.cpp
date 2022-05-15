#include "registered_user.h"
#include <iostream>
#include <cstring>
using namespace std;

registered_user::registered_user(
//default constructor
){}

registered_user::registered_user(const char newuser_ID[],const char newuser_Name[],const char newpassword[]){
    strcpy(userID,newuser_ID);
    strcpy(user_Name,newuser_Name);
    strcpy(password,newpassword);
    numberOForders=0;
    numberOFreservations=0;
}

void registered_user::addorder(order *o2){
    if(numberOForders<SIZE){
        o1[numberOForders]=o2;
        numberOForders++;
    }//counting the orders
}
void registered_user::addreservation(reservation *r2){
    if(numberOFreservations<SIZE){
        r1[numberOFreservations]=r2;
        numberOFreservations++;
    }//counting the reservations
}
void registered_user::displayDetails(){

    cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n\n";
    for( int i = 0; i < numberOForders; i++)
        o1[i]->displayDetails();
    cout << "---------------------\n" ;
  //displaying all the orders user got
}
void registered_user::displayDetails1(){

    cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n";
    for( int i = 0; i < numberOFreservations; i++)
        r1[i]->displayDetails();
    cout << "---------------------\n" ;
  //displaying all the reservations user got
}
registered_user::~registered_user(){
    cout<< "\nuser closed";
}
