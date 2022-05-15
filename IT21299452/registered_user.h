#ifndef REGUSER //File guard
#define REGUSER
#include "order.h"
#include "reservation.h"
#define SIZE 5

class registered_user;
class order;
class reservation;

class registered_user {
    private:
    char userID[20];
    char user_Name[20];
    char password[20];
    order *o1[SIZE]; //unidirectional connection with registered user and order
    int numberOForders;
    reservation *r1[SIZE];//unidirectional connection with registered user and reservation
    int numberOFreservations;
    public:
    registered_user();
    registered_user(const char newuser_ID[],const char newuser_Name[],const char newpassword[]);
//Parameterized constructor
    void addreservation(reservation *r2);
    void addorder(order *o2);
    void displayDetails();
    void displayDetails1();
    ~registered_user();
};
#endif