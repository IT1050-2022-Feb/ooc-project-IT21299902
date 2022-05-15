
#include<iostream>
#include<cstring>
#include"Registered_User.h" //connecting register user header
#include "Pet.h" //connecting pet header

using namespace std ;


//default constructor
Registered_User::Registered_User() {

	strcpy(userId, "0");
	strcpy(userName,"");
	strcpy(password,"");
}

// implimenting set details function

void Registered_User::SetDetails( const char u_UserId[], const char u_UserName[], const char u_Password[]) {
	  
	strcpy(userId,u_UserId);
	strcpy(userName,u_UserName);
	strcpy(password,u_Password);
}


//assingning pets
void Registerd_User::addPet(Pet* p1, Pet* p2, Pet* p3) {
	 Pet1[0] = p1;
	 Pet1[1] = p2;
	 Pet1[2] = p3;
 }



//implimenting the display function ;

void Registered_User::DisplayDetails(){

}


//printing Register details with his pets
void Registerd_User::DisplayPDetails1() {

	 cout << "------------------------------------------" << endl;
	 cout << "User ID   --> " << userId << endl;
	 cout << "User Name --> " << userName << endl << endl;

	 for (int i = 0; i < SIZE; i++) {
		 Pet1[i]->DisplayPDetails();
	 }
	 cout << "------------------------------------------" << endl;
 }
