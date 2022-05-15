#include"Registered_user"
#include<iostream>
#include<cstring>
using namespace std;

#define SIZE 2

Registered_user::Registered_user()
{
   //Default constructor
}
Registered_user(const char id[], const char name[], const char pw[], const char nname[], const char pno[], const char mailAdd[], const char add[], const char dob[]);
{
	strcpy_s(User_ID , id);
	strcpy_s(User_name , name);
	strcpy_s(Password , pw);
  strcpy_s(Name , nname);
	strcpy_s(Phone_Number , pno);
	strcpy_s(Email_Address , mailAdd);
	strcpy_s(Address , add);
	strcpy_s(DOB , dob);

	noOfComplaints = 0;
}

void Registered_user::copli(Complaint* c)
{
  //Adding Complaint to Registered user
if (noOfComplaints < SIZE)
		com[noOfComplaints] = c;
	noOfComplaints++;
  
}

void Registered_user::DisplayDetails()
{
	//implement Display Registered user details
for (int i = 0; i < noOfComplaints; i++)
		com[i]->Display_Details();
}

Registered_user::~Registered_user()
{
	//Destructor 
}
