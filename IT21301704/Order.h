#include "shop_item.h"
class order //implimenting order class
{
    private:
    char order_ID[10];
    char order_Time[20];
    char order_Date[20];
    shopitem *I1[SIZE];
    public:
    order();
    order(const char neworder_ID[],const char neworder_Time[],const char neworder_Date[]);
    void addshopitem(shopitem *I2,shopitem *I3,shopitem *I4,shopitem *I5);
    void displayDetails();
    ~order();
};


