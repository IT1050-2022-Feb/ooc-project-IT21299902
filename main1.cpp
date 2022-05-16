#include<cstring>
#include<iostream>
#include "Unregistered_User.h"
#include "Vet.h"
#include "SystemAdmin.h"
#include "Registered_User.h"
#include "Pet.h"
#include "User.h"
#include "Service.h"
#include "Report.h"
#define SIZE 4;
class Donation;

int main()
{
//Dilhara W.M.A.
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





  //asmath zakey



  	Registered_User RegUser1, RegUser2, RegUser3, RegUser4; //object for registered user
	Unregistered_User UnregUser1, UnregUser2, UnregUser3, UnregUser4; //object for unregisterd user
	Vet vet1, vet2, vet3; //objects for vet
	SystemAdmin Admin1; //object for system admin


	RegUser1.SetDetails1(); //assingning vlaues for Reguser
	RegUser1.SetDetails();  //assingning vlaues for Reguser

	RegUser2.SetDetails1();//assingning vlaues for Reguser
	RegUser2.SetDetails(); //assingning vlaues for Reguser

	RegUser3.SetDetails1(); //assingning vlaues for Reguser
	RegUser3.SetDetails();//assingning vlaues for Reguser

	RegUser4.SetDetails1();//assingning vlaues for Reguser
	RegUser4.SetDetails();//assingning vlaues for Reguser


	RegUser1.DisplayDetails(); //printing registered user details
	RegUser2.DisplayDetails(); //printing registered user details
	RegUser3.DisplayDetails();  //printing registered user details
	RegUser4.DisplayDetails();  //printing registered user details



	UnregUser1.SetDetails1();   //assingning values for unregistered user
	UnregUser2.SetDetails1();    //assingning values for unregistered user
	UnregUser3.SetDetails1();   //assingning values for unregistered user
	UnregUser4.SetDetails1();   //assingning values for unregistered user

  UnregUser1.DisplayUnReDetails();   //printing unregistered user details
  UnregUser2.DisplayUnReDetails();   //printing unregistered user details
  UnregUser3.DisplayUnReDetails();   //printing unregistered user details
	UnregUser4.DisplayUnReDetails();  //printing unregistered user details
 




  //setting values for VET
	vet1.SetDetails1();
	vet1.SetDetails();
	
  //setting values for VET
	vet2.SetDetails1();
	vet2.SetDetails();

   //setting values for VET
	vet3.SetDetails1();
	vet3.SetDetails();

  //Displaying values of VET
	vet1.DisplayDocDetails();
	vet2.DisplayDocDetails();
	vet3.DisplayDocDetails();


	
	Admin1.SetDetails1(); //adding details tom system admin
	Admin1.SetDetails();
   
	Admin1.DisplayAdminDetails();  //desplaying system admin details


  //Registered User vs Pet
  u->SetDetails(); //swettign user detaiuls for relevent pets

    Pet* p1 = new Pet();  //creating dynamic object adn assignning values
    Pet* p2 = new Pet();   //creating dynamic object adn assignning values
    Pet* p3 = new Pet();   //creating dynamic object adn assignning values

    u->addPet(p1, p2, p3); //adding pet detials to relevent user
    u->DisplayPDetails();  //displatying details


    



  //System admin vs Service

   System_Admin* B = new System_Admin(); //creting dynamic object for system admin 

	B->SetDetails(); //assignning value for relevent system admin

	Service* s1 = new Service();  //creating dynamic object and assigning values
	Service* s2 = new Service();  //creating dynamic object and assigning values
	Service* s3 = new Service();  //creating dynamic object and assigning values
	Service* s4 = new Service();  //creating dynamic object and assigning values


	B->addService(s1, s2, s3, s4); //adding service deatils with system admin
	B->DisplayServiceDetails();  //printing service details with system admin


 --------------------------------------------- //System admin vs report----------------------
  System_Admin* A = new System_Admin(); //creatin system admin object
	
	A->SetDetails(); //assingni9ng value to object(suystem admin)

	Report* r1 = new Report(); //assingnign vlaues for report
	Report* r2 = new Report(); //assingnign vlaues for report

	A->addReport(r1, r2);  //adding report detials with system admin 
	A->DisplayReportDetails();  //printing report details wih admin details





  
  //praneeth
  Registered_User *RegUser1;
  RegUser1= new Registered_User;
  Registered_User *RegUser2;
  RegUser2= new Registered_User;
  Registered_User *RegUser3;
  RegUser3= new Registered_User;
  Registered_User *RegUser1;
  RegUser1= new Registered_User;
  
	Donation *d1;
  d1= new Registered_User;
  Donation *d2;
  d2= new Registered_User;
  Donation *d3;
  d3= new Registered_User;
  Donation *d4;
  d4= new Registered_User;


	RegUser1->SetDetails();

	RegUser2->SetDetails();

	RegUser3->SetDetails();

	RegUser4->SetDetails();

	

	d1->setDetails();
	d2->setDetails();
	d3->setDetails();
	d4->setDetails();;

	RegUser1->DisplayDetails();
	d1->displayDetails();
	RegUser2->DisplayDetails();
	d2->displayDetails();
	RegUser3->DisplayDetails();
	d3->displayDetails();
	RegUser4->DisplayDetails();
	d4->displayDetails();

 

  //feedback
  
	Feedback *f1;
  f1=new Feedback;
  Feedback *f2;
  f2=new Feedback;
  Feedback *f3;
  f3=new Feedback;
  Feedback *f4;
  f4=new Feedback;


	f1->setDetails();
	f2->setDetails();
	f3->setDetails();
	f4->setDetails();

	RegUser1->DisplayDetails();
	f1->displayDetails();
	RegUser2->DisplayDetails();
	f2->displayDetails();
	RegUser3->DisplayDetails();
	f3->displayDetails();
	RegUser4->DisplayDetails();
	f4->displayDetails();
  

  
  //reservations-services
  reservation r1, r2, r3, r4;
    r1.setDetails();
    r2.setDetails( );
    r3.setDetails();
    r4.setDetails( );

    Service s1, s2, s3, s4;

    s1.setDetails();
    s2.setDetails();
    s3.setDetails();
    s4.setDetails();

    r1.displayDetails();
    s1.displayDetails();
    r2.displayDetails();
    s2.displayDetails();
    r3.displayDetails();
    s3.displayDetails();
    r4.displayDetails();
    s4.displayDetails();




  //ginuri

  Registered_User *RegUser1;
  RegUser1= new Registered_User;
  Registered_User *RegUser2;
  RegUser2= new Registered_User;
  Registered_User *RegUser3;
  RegUser3= new Registered_User;
  Registered_User *RegUser4;
  RegUser4= new Registered_User;
  
	Donation *d1;
  d1= new Donation;
  Donation *d2;
  d2= new Donation;
  Donation *d3;
  d3= new Donation;
  Donation *d4;
  d4= new Donation;


	RegUser1->SetDetails();

	RegUser2->SetDetails();

	RegUser3->SetDetails();

	RegUser4->SetDetails();

	

	d1->setDetails();
	d2->setDetails();
	d3->setDetails();
	d4->setDetails();;

	RegUser1->DisplayDetails();
	d1->displayDetails();
	RegUser2->DisplayDetails();
	d2->displayDetails();
	RegUser3->DisplayDetails();
	d3->displayDetails();
	RegUser4->DisplayDetails();
	d4->displayDetails();

  
  

  //feedback
  
	Feedback *f1;
  f1=new Feedback;
  Feedback *f2;
  f2=new Feedback;
  Feedback *f3;
  f3=new Feedback;
  Feedback *f4;
  f4=new Feedback;


	f1->setDetails();
	f2->setDetails();
	f3->setDetails();
	f4->setDetails();

	RegUser1->DisplayDetails();
	f1->displayDetails();
	RegUser2->DisplayDetails();
	f2->displayDetails();
	RegUser3->DisplayDetails();
	f3->displayDetails();
	RegUser4->DisplayDetails();
	f4->displayDetails();
  

  
  //reservations-services
  reservation *r1;
  r1=new reservation;
  reservation *r2;
  r2=new reservation;
  reservation *r3;
  r3=new reservation;
  reservation *r4;
  r4=new reservation;
  
    r1->setDetails();
    r2->setDetails( );
    r3->setDetails( );
    r4->setDetails( );

    Service *s1;
    s1= new Service;
   Service *s2;
    s2= new Service;
   Service *s3;
    s3= new Service;
   Service *s4;
    s4= new Service;
  

    s1->setDetails();
    s2->setDetails();
    s3->setDetails();
    s4->setDetails();

    r1->displayDetails();
    s1->displayDetails();
    r2->displayDetails();
    s2->displayDetails();
    r3->displayDetails();
    s3->displayDetails();
    r4->displayDetails();
    s4->displayDetails();

 











 ////deleting dynamic objects

delete d1,d2,d3,d4;

delete RegUser1,RegUser2,RegUser3,RegUser4;
delete f1,f2,f3,f4;
  
delete r1,r2,r3,r4;
delete s1,s2,s3,s4;

delete d1,d2,d3,d4;
delete RegUser1,RegUser2,RegUser3,RegUser4;
delete f1,f2,f3,f4;

  
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
  


  
  //deleting dynamic objects
	delete r1;
  delete r2;
	delete A;
  delete p1;
  delete p2;
  delete p3;
  delete u;
  delete s1;
  delete s2;
  delete s3;
  delete s4;
	delete B;


return 0 ;

