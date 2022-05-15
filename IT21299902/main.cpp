 //connecting header files

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

using namespace std;

int main()
{



	
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


	return 0;
}





