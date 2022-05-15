#include "User.h"
#include<iostream>
#include<cstring>

using namespace std;


//implimenting the User parent class


//default constructor User
User::User() {
	strcpy_s(name, "");
	strcpy_s(Tp_No, "0000000000");
	strcpy_s(Email, "");
	strcpy_s(Address, "");
	strcpy_s(DOB, "00 / 00 / 0000");
}

//Set details of the User


void User::SetDetails1(const char U_name[], const char u_Tp_NO[], const char u_Email[], const char u_Address[], const char u_DOB[]) {

	strcpy_s(name, U_name);
	strcpy_s(Tp_No, u_Tp_NO);
	strcpy_s(Email, u_Email);
	strcpy_s(Address, u_Address);
	strcpy_s(DOB, u_DOB);

}


//displaying details  function implimentation

void User::DisplayDetails() {

	cout << "---------------------------------------------" << endl;
	cout << "Name    --> " << name << endl;
	cout << "Tp No   --> " << Tp_No << endl;
	cout << "Email   --> " << Email << endl;
	cout << "Address --> " << Address <<endl;
	cout << "BOD     -->" << DOB << endl;
	cout << "---------------------------------------------" << endl;

}



//implimenting The Registered user class

//Default constructor

Registered_User::Registered_User() {

	strcpy_s(userId, "0");
	strcpy_s(userName,"");
	strcpy_s(password,"");
}

// implimenting set details function

void Registered_User::SetDetails( const char u_UserId[], const char u_UserName[], const char u_Password[]) {
	  
	strcpy_s(userId,u_UserId);
	strcpy_s(userName,u_UserName);
	strcpy_s(password,u_Password);
}


//implimenting the display function ;


void Registered_User::DisplayDetails(){

	cout << endl<<"----------------------------------------------------------------------------------" << endl;
	cout << "User ID   -->" << userId << endl;
	cout << "User name -->" << userName<<endl;
	cout << "Password  -->" << password << endl;
	cout << "Name      -->" << name << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl<<endl;
	cout << "----------------------------------------------------------------------------------" << endl;


}


//implimeting the Unregisterd user class

//default constructor

Unregistered_User::Unregistered_User() {
   
	strcpy_s(name, "");
	strcpy_s(Tp_No, "0000000000");
	strcpy_s(Email, "");
	strcpy_s(Address, "");
	strcpy_s(DOB, "00 / 00 / 0000");


}




//impliment display function

void Unregistered_User::DisplayDetails() {

	cout << "-----------------------------------------------------------------------------------" << endl;
	cout << "Name      -->" << name << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl;
	cout << "-----------------------------------------------------------------------------------" << endl;

}


//implimeting vet class

//default constructor

Vet::Vet() {

	strcpy_s(DocId,"0");
	strcpy_s(Position,"");
	strcpy_s(UserName,"");
	strcpy_s(Password , "");
}


//implimeting set details function


void Vet::SetDetails(const char d_DocId[], const char d_Position[], const char d_UserNmae[], const char d_Password[]) {

	strcpy_s(DocId,d_DocId);
	strcpy_s(Position,d_Position);
	strcpy_s(UserName,d_UserNmae);
	strcpy_s(Password,d_Password);
}

//implimenting display function

void Vet::DisplayDetails() {


	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Docotr ID -->" << DocId << endl;
	cout << "User name -->" << UserName << endl;
	cout << "Password  -->" << Password << endl;
	cout << "Name      -->" << name << endl;
	cout << "Positione -->" << Position << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl;
	cout << "---------------------------------------------------------------------------------" << endl;


}




//implimeting system addmin class

//default constructor

SystemAdmin::SystemAdmin() {

	strcpy_s(StafId,"0");
	strcpy_s(UserName,"");
	strcpy_s(password,"");
}


//implimenting set details function 


void SystemAdmin::SetDetails(const char u_StaffId[], const char u_UserNmae[], const char u_Password[]) {

	strcpy_s(StafId,u_StaffId);
	strcpy_s(UserName,u_UserNmae);
	strcpy_s(password,u_Password);
}


//implimenting disply function

void SystemAdmin::DisplayDetails() {

	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "Staff ID  -->" << StafId << endl;
	cout << "User name -->" << UserName << endl;
	cout << "Name      -->" << name << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl;
	cout << "----------------------------------------------------------------------------------" << endl;


}