#ifndef ORDER //File guard
#define ORDER
#include "payment.h"
#include "registered_user.h"

class registered_user;
class order;

class order {
    private:
    char order_ID[10];
    char order_Time[20];
    char order_Date[20];
    payment *pay2;//composition connection with reservation and payment
    registered_user *c1;//unidirectional connection with registered user and reservation
    public:
    order();
    order(const char neworder_ID[],const char neworder_Time[],const char neworder_Date[],payment *pay3);
//composition connection with reservation and payment
//Parameterized constructor
    void addRegUser(registered_user *c2);
    void displayDetails();
    ~order();
};
#endif