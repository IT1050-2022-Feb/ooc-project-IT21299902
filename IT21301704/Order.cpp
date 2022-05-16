#include <iostream>
#include <cstring>
#include "Order.h"
using namespace std ;

  // Default Contructor
order::order(){
     
}
  // implimenting set details function
 
order::order(const char neworder_ID[],const char neworder_Time[],const char neworder_Date[])
{
   strcpy(order_ID,neworder_ID);
   strcpy(order_Time,neworder_Time);
   strcpy(order_Date,neworder_Date);
}

  //assingning Shop_Items
  
void order::addshopitem(shopitem *I2,shopitem *I3,shopitem *I4,shopitem *I5)  
{  
    I1[0]=I2;
    I1[1]=I3;
    I1[2]=I4;
    I1[3]=I5;
}
  // implementing Order Details functions

 
void order::displayDetails()  
{
  cout << "\nOrder ID =" << order_ID << "\n" ;
  cout << "Order Time =" << order_Time << "\n" ;
  cout << "Order Date =" << order_Date << "\n" ;
  for( int i = 0; i < SIZE; i++)
        I1[i]->displayDetails();
    cout << "---------------------\n" ;
}

// Destructor
order::~order()  
{  
  cout << "\nOrder Closed...";
}