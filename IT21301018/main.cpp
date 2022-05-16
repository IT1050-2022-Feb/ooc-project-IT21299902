#include<iostream>
#include<cstring>

#include "Registered_User.h"
#include "Service.h"
#include "reservation.h"
#include "Feedback.h"
#include"Donation.h"


#define SIZE 4;
using namespace std;
class Donation;


int main()
{
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

  delete d1,d2,d3,d4;
  

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
  
delete RegUser1,RegUser2,RegUser3,RegUser4;
delete f1,f2,f3,f4;
  
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

  delete r1,r2,r3,r4;
  delete s1,s2,s3,s4;

	return 0;
}
