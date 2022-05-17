#ifndef ADMIN
#define ADMIN
#include"user.h" //inheritence with user class
#include "Service.h"  //connecting service header file
#include "Report.h" //connecting report header file

//report size
#define SIZE3 2 

//service size 
#define SIZE4 4 
class Service;

class SystemAdmin : public User {  //connecting inheritence to systemadmin

private:
	char StafId[20]; 
	char UserName[20];
	char password[20];
  Service* ser[SIZE4];  //uni directional association connection with Service class
  int numOFser; 
  Report *rep[SIZE3];    //uni directional association connection with Report class
  int numOFrep;

public:
	SystemAdmin(); //default constrcuctor
	SystemAdmin(const char u_StaffId[] , const char u_UserName[] ,const char u_Password[]);  
  void setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]);
  void addService(Service* s1); //adding service details to admin
  void addReport(Report* r1); //adding report details to admin
	void DisplayAdminDetails();
  void DisplayServiceDetails();
  void DisplayReportDetails();
   void DisplayDetailsUser();
  ~SystemAdmin();

};
#endif


