#include "registered_user.h"
#include <iostream>
#include <cstring>
using namespace std;

registered_user::registered_user(
//default constructor
){}

registered_user::registered_user(const char newuser_ID[],const char newuser_Name[],const char newpassword[]){
    strcpy(userID,newuser_ID);
    strcpy(user_Name,newuser_Name);
    strcpy(password,newpassword);
    numberOForders=0;
    numberOFreservations=0;
}

void registered_user::addorder(order *o2){
    if(numberOForders<SIZE7){
        o1[numberOForders]=o2;
        numberOForders++;
    }//counting the orders
}
void registered_user::addreservation(reservation *r2){
    if(numberOFreservations<SIZE7){
        r1[numberOFreservations]=r2;
        numberOFreservations++;
    }//counting the reservations
}
void registered_user::additems(shopitem *I1){
        if(numberOFitems<SIZE7){
        item[numberOFitems]=I1;
        numberOFitems++;
    }//counting the reservations

}
void registered_user::addPet(Pet *p1){
    if(numberOFpets<SIZE7){
        Pet1[numberOFpets]=p1;
        numberOFpets++;
    }
}

void registered_user::addService(Service * S2) {
		if (numberOFService < SIZE7) {
			S1[numberOFService] = S2;
			numberOFService++;
		}//counting the orders
}

void registered_user::copli(Complaint* c)
{
	if (noOfComplaints < SIZE7)
		com[noOfComplaints] = c;
	noOfComplaints++;
}
void registered_user::addDonation(Donation* dod1)
{
	if (noOFdonations < SIZE7)
		dod[noOFdonations] = dod1;
	noOFdonations++;
}

void registered_user::addFeedback(Feedback* feed1)
{
	if (noOFfeedbacks < SIZE7)
		feed[noOFfeedbacks] = feed1;
	noOFfeedbacks++;
}
void registered_user::DisplayDetailFeedback()
{
	cout << "--------" << endl;
	cout << "User ID : " << userID << endl;
	cout << "User Name : " << user_Name << endl;
	cout << "Password : " << password << endl;

	for (int i = 0; i < noOFfeedbacks; i++)
		feed[i]->displayDetails();


}
void registered_user::DisplayDetailsDonation()
{
	cout << "---------" << endl;
	cout << "User ID : " << userID << endl;
	cout << "User Name : " << user_Name << endl;
	cout << "Password : " << password << endl;

	for (int i = 0; i < noOFdonations; i++)
		dod[i]->Display_Details();


}
void registered_user::DisplayDetailscomplaint()
{
	cout << "------" << endl;
	cout << "User ID : " << userID << endl;
	cout << "User Name : " << user_Name << endl;
	cout << "Password : " << password << endl;

	for (int i = 0; i < noOfComplaints; i++)
		com[i]->Display_Details();
  cout << "--------" << endl;

}

void registered_user::displayDetailsService()
{
  cout << "--------" << endl;
	cout << "User ID =" << userID << "\n";
	cout << "User Name =" << user_Name << "\n";
	cout << "Password =" << password << "\n";
	for (int i = 0; i < SIZE7; i++)
		S1[i]->DisplayServDetails();
	cout << "-----------------\n";

}

void registered_user::displayDetailsorder(){

    cout << "--------" << endl;
    cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n\n";
    for( int i = 0; i < numberOForders; i++)
        o1[i]->displayDetails();
    cout << "---------------------\n" ;
  //displaying all the orders user got
}
void registered_user::displayDetailsreservation(){

    cout << "--------" << endl;
    cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n";
    for( int i = 0; i < numberOFreservations; i++)
        r1[i]->displayDetailsReservation();
    cout << "---------------------\n" ;
  //displaying all the reservations user got
}


//printing Register details with his pets
void registered_user::DisplayPDetailsPet() {

	 cout << "-----------" << endl;
	 cout << "User ID   --> " << userID << endl;
	 cout << "User Name --> " << user_Name << endl << endl;

	 for (int i = 0; i < numberOFpets; i++) {
		 Pet1[i]->DisplayPetDetails();
	 }
	 cout << "---------" << endl;
 }

 void registered_user::DisplayDetailsUser(){

	cout << "\n----------" << endl;
	cout << "User ID   -->" << userID << endl;
	cout << "User name -->" << user_Name<<endl;
	cout << "Password  -->" << password << endl;
	cout << "Name      -->" << name << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl<<endl;
	cout << "---------------" << endl;


}
void registered_user::displayDetailsshopitem(){

  cout << "--------" << endl;
    cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n";
    for( int i = 0; i < numberOFitems; i++)
        item[i]->displayDetails();
    cout << "---------------------\n" ;
}

void registered_user::DisplayDetailsRegUser(){
  cout << "--------" << endl;
	cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n";
  cout << "--------" << endl;
}

registered_user::~registered_user(){
    cout<< "\nuser closed";
}


void registered_user::setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]){
    strcpy(name, U_name);
	strcpy(Tp_No, u_Tp_NO);
	strcpy(Email, u_Email);
	strcpy(Address, u_Address);
	strcpy(DOB, u_DOB);

}