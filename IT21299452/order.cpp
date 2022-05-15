#include "order.h"
#include <iostream>
#include <cstring>
using namespace std;
order::order(){
    pay2= new payment(" "," "," ",00.00);
  //default constructor
}
//Parameterized constructor
order::order(const char neworder_ID[],const char neworder_Time[],const char neworder_Date[],payment *pay3){
   strcpy(order_ID,neworder_ID);
   strcpy(order_Time,neworder_Time);
   strcpy(order_Date,neworder_Date);
   pay2=pay3;
}
void order::addRegUser(registered_user *c2){
       c1=c2;
   c1->addorder(this);
  //adding registered users to orders
}
void order::displayDetails(){
  cout << "Order ID =" << order_ID << "\n" ;
  cout << "Order Time =" << order_Time << "\n" ;
  cout << "Order Date =" << order_Date << "\n" ;
  pay2->displayDetails();

}
order::~order(){
  cout << "Order Closed...";
}