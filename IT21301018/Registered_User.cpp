#include<cstring>
#include<iostream>
#include "Registered_User.h"
using namespace std;
//implimenting The Registered user class

//Default constructor

Registered_User::Registered_User() {

	strcpy(userId, "0");
	strcpy(name, "");
	strcpy(Email, "");
}

// implimenting set details function

void Registered_User::SetDetails(const char u_UserId[], const char u_UserName[], const char u_email[]) {

	strcpy(userId, u_UserId);
	strcpy(name, u_UserName);
	strcpy(Email, u_email);
}


//implimenting the display function ;


void Registered_User::DisplayDetails() {


}

