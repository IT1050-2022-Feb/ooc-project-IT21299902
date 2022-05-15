
#include<iostream>
#include<cstring>
#include"SystemAdmin.h"  //connecting system admin  header file
#include "Service.h"  //connecting service header file
#include "Report.h"  //connecting report header file

#define SIZE 4

using namespace std ;


//default constructor
SystemAdmin::SystemAdmin() {

	strcpy(StafId,"0");
	strcpy(UserName,"");
	strcpy(password,"");
}


//implimenting set details function 
void SystemAdmin::SetDetails(const char u_StaffId[], const char u_UserNmae[], const char u_Password[]) {

	strcpy(StafId,u_StaffId);
	strcpy(UserName,u_UserNmae);
	strcpy(password,u_Password);
}

void System_Admin::addService(Service* s1, Service* s2, Service* s3, Service* s4){
	ser[0] = s1;
	ser[1] = s2;
	ser[2] = s3;
	ser[3] = s4;
}

void System_Admin::addReport(Report* r1, Report* r2) {
	rep[0] = r1;
	rep[1] = r2;
}


//implimenting display function

void SystemAdmin::DisplayAdminDetails() {

  }

//Service + System Admin
void System_Admin::DisplayServiceDetails() {

	cout << "------------------------------------------" << endl;
	cout << "Admin ID   --> " << adminId << endl;
	cout << "Admin Name --> " << adminName << endl << endl;

	for (int i = 0; i < SIZE; i++) {
		ser[i]->DisplayServiceDetails();
	}
	cout << "------------------------------------------" << endl;
}



//Report  + System admin
void System_Admin::DisplayReportDetails() {

	cout << "------------------------------------------" << endl;
	cout << "Admin ID   --> " << adminId << endl;
	cout << "Admin Name --> " << adminName<<endl << endl;
	
	for (int i = 0; i < SIZE; i++) {
		rep[i]->DisplayReportDetails();
	}
	cout << "------------------------------------------" << endl;
}

SystemAdmin::~SystemAdmin(){
  //destructor
}