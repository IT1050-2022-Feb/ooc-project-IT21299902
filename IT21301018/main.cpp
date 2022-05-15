#include <iostream>
#include<cstring>
#include "Donation.h"
#include "Registered_User.h"

#define SIZE 4;
using namespace std;
class Donation;


int main()
{
	Registered_User *RegUser1, *RegUser2, *RegUser3, *RegUser4;
  RegUser1= new ;
  
	Donation *d1,*d2,*d3,*d4;


	RegUser1->SetDetails("U00001", "Saman Edidrimuni", "saman2001@gmail.com");

	RegUser2->SetDetails("U00002", "ishmath khan", "ishnmath@gmail.com");

	RegUser3->SetDetails("U00003", "Avishka sandamaal", "Avishka@gmail.com");

	RegUser4->SetDetails("U00004", "Gihan imalsha", "gihanrox@gmail.com");

	

	d1->setDetails("D00001", "11/06/2022", 2500.00);
	d2->setDetails("D00002", "08/04/2022", 4400.00);
	d3->setDetails("D00003", "12/06/2022", 5200.00);
	d4->setDetails("D00004", "15/08/2022", 3000.00);;

	RegUser1->DisplayDetails();
	d1->displayDetails();
	RegUser2->DisplayDetails();
	d2->displayDetails();
	RegUser3->DisplayDetails();
	d3->displayDetails();
	RegUser4->DisplayDetails();
	d4->displayDetails();

  delete d1,d2,d3,d4;
  delete RegUser1,RegUser2,RegUser3,RegUser4;

  //feedback
  Registered_User RegUser1, RegUser2, RegUser3, RegUser4;
	Feedback f1, f2, f3, f4;


	RegUser1->SetDetails("U00001", "Saman Edidrimuni", "saman2001@gmail.com");

	RegUser2->SetDetails("U00002", "ishmath khan", "ishnmath@gmail.com");

	RegUser3->SetDetails("U00003", "Avishka sandamaal", "Avishka@gmail.com");

	RegUser4->SetDetails("U00004", "Gihan imalsha", "gihanrox@gmail.com");



	cout << "-----------------------------REGISTERED USERS---------------------------" << endl << endl;



	f1->setDetails("F00001", "good", "The customer service was really great");
	f2->setDetails("F00002", "satisfied", "There was a minor delay but the service was good");
	f3->setDetails("F00003", "very good", "This is the best pet care system I recommend anyone to use");
	f4->setDetails("F00004", "poor", "We are not satisfied with your service , we were unable to get an appointment on the day we wanted");

	RegUser1->DisplayDetails();
	f1->displayDetails();
	RegUser2.DisplayDetails();
	f2.displayDetails();
	RegUser3.DisplayDetails();
	f3.displayDetails();
	RegUser4.DisplayDetails();
	f4.displayDetails();

  //reservations-services
  reservation r1, r2, r3, r4;
    r1.setDetails("R000001", "15:30:59", "09-05-2022");
    r2.setDetails("R000002", "16:30:59", "11-05-2022", );
    r3.setDetails("R000003", "19:30:59", "15-05-2022", );
    r4.setDetails("R000004", "08:30:59", "16-05-2022", );

    Service s1, s2, s3, s4;

    s1.setDetails("S0001", "Pet health care", "Pet Vaccination", 2500);
    s2.setDetails("S0002", "Pet clinic service", "blood Test", 4000);
    s3.setDetails("S0003", "Pet clinic service", "Pet Consultancy", 1750);
    s4.setDetails("S0004", "Pet Body chekup", "Dermatology And Cytology Examination", 8000);

    r1.displayDetails();
    s1.displayDetails();
    r2.displayDetails();
    s2.displayDetails();
    r3.displayDetails();
    s3.displayDetails();
    r4.displayDetails();
    s4.displayDetails();


	return 0;
}
