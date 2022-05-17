
#include<iostream>
#include<cstring>
#include"SystemAdmin.h"  //connecting system admin  header file
#include "Service.h"  //connecting service header file
#include "Report.h"  //connecting report header file

#define SIZE5 4

using namespace std ;


//default constructor
SystemAdmin::SystemAdmin() {

	strcpy(StafId,"0");
	strcpy(UserName,"");
	strcpy(password,"");
}


//implimenting set details function 
SystemAdmin::SystemAdmin(const char u_StaffId[], const char u_UserNmae[], const char u_Password[]) {

	strcpy(StafId,u_StaffId);
	strcpy(UserName,u_UserNmae);
	strcpy(password,u_Password);
}

void SystemAdmin::addService(Service* s1){
	
	if(numOFser<SIZE5){
        ser[numOFser]=s1;
        numOFser++;
    }
}

void SystemAdmin::addReport(Report* r1) {
	
	if(numOFrep<SIZE5){
        rep[numOFrep]=r1;
        numOFrep++;
    }
}


//implimenting display function

void SystemAdmin::DisplayAdminDetails() {

  }

//Service + System Admin
void SystemAdmin::DisplayServiceDetails() {

	cout << "---------" << endl;
	cout << "Admin ID   --> " << StafId << endl;
	cout << "Admin Name --> " << UserName << endl << endl;

	for (int i = 0; i < numOFser; i++) {
		ser[i]->DisplayServDetails();
	}
	cout << "----------" << endl;
}



//Report  + System admin
void SystemAdmin::DisplayReportDetails() {

	cout << "---------" << endl;
	cout << "Admin ID   --> " << StafId << endl;
	cout << "Admin Name --> " << UserName <<endl << endl;
	
	for (int i = 0; i < numOFrep; i++) {
		rep[i]->DisplayDetails();
	}
	cout << "-------" << endl;
}
void SystemAdmin::setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]){
  strcpy(name, U_name);
	strcpy(Tp_No, u_Tp_NO);
	strcpy(Email, u_Email);
	strcpy(Address, u_Address);
	strcpy(DOB, u_DOB);
}


 void SystemAdmin::DisplayDetailsUser(){

	cout << "\n-------" << endl;
	cout << "Staff ID   -->" << StafId << endl;
	cout << "User name -->" << UserName<<endl;
	cout << "Password  -->" << password << endl;
	cout << "Name      -->" << name << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl<<endl;
	cout << "-------" << endl;


}

SystemAdmin::~SystemAdmin(){
  //destructor
}