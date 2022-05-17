#include "order.h"
#include <iostream>
#include <cstring>
using namespace std;
order::order(){
    pay2= new payment(" "," "," ",00.00);
}
order::order(const char neworder_ID[],const char neworder_Time[],const char neworder_Date[],payment *pay3){
   strcpy(order_ID,neworder_ID);
   strcpy(order_Time,neworder_Time);
   strcpy(order_Date,neworder_Date);
   pay2=pay3;
}
void order::addRegUser(registered_user *c2){
       c1=c2;
   c1->addorder(this);
}

void order::addshopitem(shopitem *I2,shopitem *I3,shopitem *I4,shopitem *I5){
    I1[0]=I2;
    I1[1]=I3;
    I1[2]=I4;
    I1[3]=I5;
}

void order::displayDetails(){
  cout << "Order ID =" << order_ID << "\n" ;
  cout << "Order Time =" << order_Time << "\n" ;
  cout << "Order Date =" << order_Date << "\n" ;
  

}

void order::displayDetailswithPayment(){
  cout << "Order ID =" << order_ID << "\n" ;
  cout << "Order Time =" << order_Time << "\n" ;
  cout << "Order Date =" << order_Date << "\n" ;
  pay2->displayDetails();

}

void order::displayDetailsshopitems(){
  cout << "\nOrder ID =" << order_ID << "\n" ;
  cout << "Order Time =" << order_Time << "\n" ;
  cout << "Order Date =" << order_Date << "\n" ;
  for( int i = 0; i < SIZE8; i++)
        I1[i]->displayDetails();
    cout << "---------------------\n" ;

}
order::~order(){
  cout << "Order Closed...";
}
 