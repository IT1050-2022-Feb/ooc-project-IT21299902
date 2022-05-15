#include<iostream>
#include"User.h" //inheritence with user class
#include "Service.h"  //connecting service header file
#include "Report.h" //connecting report header file

//report size
#define SIZE 2 

//service size 
#define SIZE1 4 

class SystemAdmin : public User {  //connecting inheritence to systemadmin

protected:
	char StafId[20]; 
	char UserName[20];
	char password[20];
  Service* ser[SIZE1];  //uni directional association connection with Service class
  Report *rep[SIZE];    //uni directional association connection with Report class

public:
	SystemAdmin(); //default constrcuctor
	void SetDetails(const char u_StaffId[] , const char u_UserName[] ,const char u_Password[]);  
  void addService(Service* s1, Service* s2 , Service *s3 , Service *s4); //adding service details to admin
  void addReport(Report* r1, Report* r2); //adding report details to admin
	void DisplayAdminDetails();
  void DisplayServiceDetails();
  void DisplayReportDetails();
  ~SystemAdmin();

};