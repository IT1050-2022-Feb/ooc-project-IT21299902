
#include "user.h"
#include<iostream>
#include<cstring>

using namespace std;


//implimenting the User parent class


//default constructor User
User::User() {
	strcpy(name, "");
	strcpy(Tp_No, "0000000000");
	strcpy(Email, "");
	strcpy(Address, "");
	strcpy(DOB, "00 / 00 / 0000");
}

User::User(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]){
    strcpy(name, U_name);
	strcpy(Tp_No, u_Tp_NO);
	strcpy(Email, u_Email);
	strcpy(Address, u_Address);
	strcpy(DOB, u_DOB);

}

//Parameterized constructor
void User::SetDetails1(const char U_name[], const char u_Tp_NO[], const char u_Email[], const char u_Address[], const char u_DOB[]) {

	strcpy(name, U_name);
	strcpy(Tp_No, u_Tp_NO);
	strcpy(Email, u_Email);
	strcpy(Address, u_Address);
	strcpy(DOB, u_DOB);

}


//displaying details  function implimentation
void User::DisplayUserDetails() {

}