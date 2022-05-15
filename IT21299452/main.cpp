#include "order.h"
#include "reservation.h"
#include "report.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  registered_user *C01=new registered_user();//Parameterized constructor
  registered_user *C02=new registered_user();//Parameterized constructor

  payment *payment1=new payment();//Parameterized constructor
  payment *payment2=new payment();//Parameterized constructor
      //composition payment-order
  order *order1=new order(,payment1);//Parameterized constructor with port objects
  order *order11=new order(,payment1);//Parameterized constructor with port objects
  order *order21=new order(,payment2);//Parameterized constructor with port objects
  order *order31=new order(,payment1);//Parameterized constructor with port objects
  order *order41=new order(,payment2);//Parameterized constructor with port objects
     //composition payment-reservation
  reservation *reservation11=new reservation(,payment1);//Parameterized constructor with port objects
  reservation *reservation2=new reservation(,payment2);//Parameterized constructor with port objects
  reservation *reservation3=new reservation(,payment1);//Parameterized constructor with port objects
  reservation *reservation4=new reservation(,payment2);//Parameterized constructor with port objects

  order1->displayDetails();//displaying order details
  
  
  reservation *reservation1=new reservation(,payment2);//Parameterized constructor with port objects
  
  reservation1->displayDetails();//displaing reservation details
  
  
  Report* r1 = new Report();//Parameterized constructor
	Report* r2 = new Report();//Parameterized constructor
    
    r1->addpayment(payment1);//adding payments to the reports
    r1->addpayment(payment2);
  
    r1->DisplayDetails();//displaying report details
    r2->DisplayDetails();
  
//unidirectional order-registered user
    order11->addRegUser(C01);
    order21->addRegUser(C01);
    order31->addRegUser(C02);
    order41->addRegUser(C02);
//unidirectional registered user-reservation
    C01->addreservation(reservation11);
    C01->addreservation(reservation2);
    C02->addreservation(reservation3);
    C02->addreservation(reservation4);

    C01->displayDetails();//printing orders of user
    C02->displayDetails();

    C01->displayDetails();//printing reservations of user
    C02->displayDetails();

    delete C01;//deleting dynamic objeccts
    delete C02;
    delete order1;
    delete order11;
    delete order21;
    delete order31;
    delete order41;
    delete reservation1;
    delete reservation11;
    delete reservation2;
    delete reservation3;
    delete reservation4;
  
    return 0;
};