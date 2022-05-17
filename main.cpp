 //connecting header files

#include<cstring>
#include<iostream>
#include "Unregistered_User.h"
#include "Vet.h"
#include "SystemAdmin.h"
#include "registered_user.h"
#include "Pet.h"
#include "user.h"
#include "Service.h"
#include "Report.h"
#include "order.h"
#include "reservation.h"
#include "donation.h"
#include "complaint.h"
#include "feedback.h"


using namespace std;

int main()
{
  //registered user object creation
  registered_user *reg1= new registered_user("6969","Kirisaman","Iwant2");
  
  //setting values for user class
  reg1->setUser("Kisisaman judaiya","0776969696","kirisaman@69@gmail.com","GotagoGama","01-04-2001");
  
  //registered user print details
    reg1->DisplayDetailsUser();

 //system admin object creation
  SystemAdmin *staff1=new SystemAdmin("7777","Amal","Amal123");

  //setting values for user class
  staff1->setUser("amal ran","077332211","gotagogama@gmail.com","gamag","12-02-1999");

  //system admin print ddetails
  staff1->DisplayDetailsUser();

  //unregistered user object creation
  Unregistered_User *unuser1=new Unregistered_User;
  
  //setting values for user class
  unuser1->setUser("ffre","---","---","---","---");

  //unregistered user print details
  unuser1->DisplayDetailsUser();
  
  //vet object creation
  Vet *vet1=new Vet("v0001","helth doc","dr.amarasinhe","45rtgs");

  //setting values for user class
  vet1->setUser("amarasinhe rupahinhe","077635274","amara69@gmail.com","colombo","21-05-2022");

  //vet print details
  vet1->DisplayDocDetails();

  //pet object creation
  Pet *pet1=new Pet("pet001","jonny","pitbull","dog","red","60cm","5KG");
  Pet *pet2=new Pet("pet002","kitty","saico","cat","blue","20cm","2KG");

  //assigning pet details to registered user
  reg1->addPet(pet1);
  reg1->addPet(pet2);

  //pet print details with registered user details 
  reg1->DisplayPDetailsPet();

  //report object creation
  Report *rep1=new Report("rep001","income",300.00);

  //assiging report details to registered user
  staff1->addReport(rep1);

  //report print details with registered user details
  staff1->DisplayReportDetails();

  //payment object creation 
  payment *pay001=new payment("pay001","credit","done",400.00);
  
  //payment print details
  pay001->displayDetails();

  //add payment amount  to report 
  rep1->addpayment(pay001);

  //print report with new total amount
  rep1->DisplayDetails();

  //service object creation
  Service *s001=new Service("s001","health care","medince",300.00);

  //assigning service details to system admin
  staff1->addService(s001);

  //service print details with system admin details
  staff1->DisplayServiceDetails();

  //complaint object creation
  Complaint *c0001=new Complaint("c001","service","service awl");
  reg1->copli(c0001);
  reg1->DisplayDetailscomplaint();

  //donation object creation
  Donation *d001= new Donation("d0001","12-04-2022",4000.00);
  reg1->addDonation(d001);
  reg1->DisplayDetailsDonation();

  //donation object creation
   Donation *d002= new Donation("d0002","12-04-2022",5000.00);

  //assing donation details to registered user
   unuser1->addDonation(d002);

  //reservation print detalis with registered user details
   unuser1->DisplayDetails();

  //reservation object creation
  reservation *re001=new reservation("re001","10:10:10","12-04-2022",pay001);

   //assing reservation details to vet
  vet1->addreservation(re001);

  //reservation print detals with vet
  vet1->displayDetailsReservation();

  //assing reservation details to registered user
  reg1->addreservation(re001);

  //reservation print detals with registered user details
  reg1->displayDetailsreservation();

  //print reservation details with payment details
  re001->displayDetailswithPayment();

  //payment object creation
  payment *pay002=new payment("pay002","paypal","done",5000.00);

  //payment print details
  pay002->displayDetails();

  //add payment amount  to report 
  rep1->addpayment(pay002);

  //print report with new total amount
  rep1->DisplayDetails();

  //order object creation
  order *or001=new order("or001","12:12:12","12-12-2022",pay002);

  //assing order details to registered user
  reg1->addorder(or001);

  //order print detals with registered user details
  reg1->displayDetailsorder();

  //print order details with payment details
  or001->displayDetailswithPayment();

  //shop item object creation
  shopitem *it001=new shopitem("it001","belt","assesoires",500.00);
  
  //assing shop item details to registered user
  reg1->additems(it001);

  //shop item print detals with registered user details
  reg1->displayDetailsshopitem();

  
  //feedback object creation
  Feedback *feed1=new Feedback("f0001","Service","service nam maru");

  //assing feedback details to registered user
  reg1->addFeedback(feed1);

  //feedback print detals with registered user details
  reg1->DisplayDetailFeedback();

  delete feed1;
  delete it001;
  delete or001;
  delete re001;
  delete d001;
  delete d002;
  delete c0001;
  delete s001;
  delete rep1;
  delete pet1;
  delete pet2;
  delete vet1;
  delete unuser1;
  delete staff1;
  delete reg1;
    return 0;
};