#ifndef ORDER
#define ORDER
#include "payment.h"
#include "shopitem.h"
#include "registered_user.h"
#define SIZE8 4
class registered_user;
class order;

class order {
    private:
    char order_ID[10];
    char order_Time[20];
    char order_Date[20];
    payment *pay2;
    registered_user *c1;
    shopitem *I1[SIZE8];
    public:
    order();
    order(const char neworder_ID[],const char neworder_Time[],const char neworder_Date[],payment *pay3);
    void addRegUser(registered_user *c2);
    void addshopitem(shopitem *I2,shopitem *I3,shopitem *I4,shopitem *I5);
    void displayDetails();
    void displayDetailswithPayment();
    void displayDetailsshopitems();

    ~order();
};
#endif 